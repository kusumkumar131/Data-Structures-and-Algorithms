#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        if (first == -1) {
            return {-1, -1};
        }
        int last = findBound(nums, target, false);
        return {first, last};
    }

private:
    int findBound(const vector<int>& nums, int target, bool isFirst) {
        int low = 0;
        int high = nums.size() - 1;
        int bound = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                bound = mid;
                if (isFirst) {
                    high = mid - 1; // Keep searching towards the left
                } else {
                    low = mid + 1;  // Keep searching towards the right
                }
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return bound;
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    vector<int> result1 = solution.searchRange(nums1, target1);
    cout << "Example 1 Output: [" << result1[0] << ", " << result1[1] << "]\n"; // Expected: [3, 4]

    // Example 2
    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    vector<int> result2 = solution.searchRange(nums2, target2);
    cout << "Example 2 Output: [" << result2[0] << ", " << result2[1] << "]\n"; // Expected: [-1, -1]

    // Example 3
    vector<int> nums3 = {};
    int target3 = 0;
    vector<int> result3 = solution.searchRange(nums3, target3);
    cout << "Example 3 Output: [" << result3[0] << ", " << result3[1] << "]\n"; // Expected: [-1, -1]

    return 0;
}
//using binary search we can solve in O(log n) time complexity and O(1) space complexity.