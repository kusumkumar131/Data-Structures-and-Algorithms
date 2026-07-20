#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;  //binary search to find the target or the insert position
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n); // Create a vector to hold the sorted elements
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    Solution solution;
    int result = solution.searchInsert(nums, target);

    cout << "Output (Insert Position): " << result << endl;


    return 0;
}