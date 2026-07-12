#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is a Kaprekar number
bool isKaprekar(int n) {
    if (n == 1) return true; // 1 is a Kaprekar number (1^2 = 1)
    
    long long sqr = (long long)n * n;
    int count_digits = 0;
    long long temp = sqr;
    
    // Count digits in the square
    while (temp > 0) {
        count_digits++;
        temp /= 10;
    }
    
    // Split the square at every possible position
    for (int i = 1; i < count_digits; i++) {
        long long eq_parts = pow(10, i);
        
        // Avoid division by zero or invalid splits
        if (eq_parts == n) continue;
        
        long long sum = (sqr / eq_parts) + (sqr % eq_parts);
        
        // The right part must be positive (e.g., for 10^2 = 100, 10 + 00 is not valid because right part is 0)
        if (sum == n && (sqr % eq_parts) > 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isKaprekar(n)) {
        cout << n << " is a Kaprekar number." << endl;
        
    } else {
        cout << n << " is not a Kaprekar number." << endl;
    }
    
    return 0;
}