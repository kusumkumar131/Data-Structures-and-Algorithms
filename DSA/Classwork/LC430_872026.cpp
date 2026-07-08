#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int x) {
        val = x;
        prev = nullptr;
        next = nullptr;
        child = nullptr;
    }
};

class Solution {
public:
    Node* solve(Node* head) {
        Node* curr = head;
        Node* last = nullptr;

        while (curr) {
            Node* next = curr->next;

            if (curr->child) {
                Node* childHead = curr->child;
                Node* childTail = solve(childHead);

                curr->next = childHead;
                childHead->prev = curr;
                curr->child = nullptr;

                if (next) {
                    childTail->next = next;
                    next->prev = childTail;
                }

                last = childTail;
                curr = childTail;
            } else {
                last = curr;
            }

            curr = curr->next;
        }

        return last;
    }

    Node* flatten(Node* head) {
        if (!head) return nullptr;
        solve(head);
        return head;
    }
};

void print(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Main List: 1-2-3-4-5-6
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);

    n1->next = n2; n2->prev = n1;
    n2->next = n3; n3->prev = n2;
    n3->next = n4; n4->prev = n3;
    n4->next = n5; n5->prev = n4;
    n5->next = n6; n6->prev = n5;

    // Child List: 7-8-9-10
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);
    Node* n9 = new Node(9);
    Node* n10 = new Node(10);

    n7->next = n8; n8->prev = n7;
    n8->next = n9; n9->prev = n8;
    n9->next = n10; n10->prev = n9;

    // Child List of 8: 11-12
    Node* n11 = new Node(11);
    Node* n12 = new Node(12);

    n11->next = n12;
    n12->prev = n11;

    // Connect child pointers
    n3->child = n7;
    n8->child = n11;

    Solution obj;
    Node* head = obj.flatten(n1);

    cout << "Flattened List: ";
    print(head);

    return 0;
}