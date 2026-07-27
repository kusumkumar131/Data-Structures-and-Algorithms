#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from the least significant digit (right to left)
        for (int i = n - 1; i >= 0; --i) {
            // If the current digit is less than 9, just increment and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the digit is 9, it becomes 0 and carry  continues
            digits[i] = 0;
        }
        
        // If all digits were 9 (e.g., [9, 9, 9]), we need an extra 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
//space complexity: O(1) if we ignore the space used for the output vector, otherwise O(n) for the output vector
int main() {
    Solution solution;

    // Test Case 1: [1, 2, 3] -> Expected: [1, 2, 4]
    std::vector<int> digits1 = {1, 2, 3};
    std::vector<int> result1 = solution.plusOne(digits1);
    
    std::cout << "Result 1: ";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Test Case 2: [9, 9, 9] -> Expected:  [1, 0, 0, 0]
    std::vector<int> digits2 = {9, 9, 9};
    std::vector<int> result2 = solution.plusOne(digits2);
    
    std::cout << "Result 2: ";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}