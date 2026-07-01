#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

int main(){
        Node* head=new Node(10);
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }   
        while(!arr.empty()){
            Node* temp=new Node(arr.back());
            arr.pop_back();
            temp->next=head;
            head=temp;
            
        }

}