
#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        // Map to store the integer values of Roman numerals  using unordered_map for O(1) average time complexity lookups
        
        std::unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // If the current value is less than the next value, subtract it
            if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } 
            // Otherwise, add it to the total
            else {

                total += roman[s[i]];
            }
        }
        
        return total;
    }
};

int main() {
    Solution solver;
    std::string example1 = "LVIII"; // 50 + 5 + 3 = 58
    std::string example2 = "MCMXCIV"; // 1000 + (1000-100) + (100-10) + (5-1) = 1994
    
    std::cout << example1 << " -> " << solver.romanToInt(example1) << std::endl;
    std::cout << example2 << " -> " << solver.romanToInt(example2) << std::endl;
    
    return 0;
}