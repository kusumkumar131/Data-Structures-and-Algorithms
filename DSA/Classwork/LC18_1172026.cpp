#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> result;
        int n = nums.size();
        
        // Base case: we need at least 4 elements
        if (n < 4) return result;
        
        // Sort the array to easily manage duplicates and use two pointers
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 3; ++i) {
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // --- Early Pruning / Optimizations ---
            // 1. Smallest possible sum with this 'i' exceeds target -> no solution possible
            if ((long long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
            // 2. Largest possible sum with this 'i' is less than target -> move to next 'i'
            if ((long long)nums[i] + nums[n - 3] + nums[n - 2] + nums[n - 1] < target) continue;
            
            for (int j = i + 1; j < n - 2; ++j) {
                // Skip duplicate values for the second element
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                
                // --- More Early Pruning ---
                if ((long long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;

                if ((long long)nums[i] + nums[j] + nums[n - 2] + nums[n - 1] < target) continue;
                
                // Two-pointer approach for the remaining two elements
                int left = j + 1;
                int right = n - 1;
                
                while (left < right) {
                    long long current_sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    
                    if (current_sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        // Skip duplicate values for the third element
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        // Skip duplicate values for the fourth element
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        
                        left++;
                        right--;
                    } else if (current_sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};

// Helper function to print the output in VS Code terminal
int main() {
    Solution solver;
    
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    
    std::vector<std::vector<int>> ans = solver.fourSum(nums, target);
    
    std::cout << "Unique Quadruplets:\n[";
    for (size_t i = 0; i < ans.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < ans[i].size(); ++j) {
            std::cout << ans[i][j] << (j == ans[i].size() - 1 ? "" : ", ");
        }
        std::cout << "]" << (i == ans.size() - 1 ? "" : ", ");
    }
    std::cout << "]\n";
    
    return 0;
}