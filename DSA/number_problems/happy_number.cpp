#include <bits/stdc++.h>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> visited;

    while (n != 1 && visited.find(n) == visited.end()) {
        visited.insert(n);
        n = sumOfSquares(n);
    }

    return n == 1;
}

int main() {
    int n;
    cin >> n;

    if (isHappy(n))
        cout << "Happy Number";
    else
        cout << "Not Happy Number";

    return 0;
}