#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
private:
    // Helper function to check if a given capacity can ship packages within the allowed days
    bool canShip(const vector<int>& weights, int days, int capacity) {
        int daysNeeded = 1;
        int currentLoad = 0;
        
        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = weight; // Start a new day with the current package
            } else {
                currentLoad += weight;
            }
        }
        
        return daysNeeded <= days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        // The minimum capacity must be at least the heaviest package
        int low = *max_element(weights.begin(), weights.end());
        // The maximum capacity is the sum of all packages
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canShip(weights, days, mid)) {
                ans = mid;        // mid is a valid capacity, try to find a smaller one
                high = mid - 1;
            } else {
                low = mid + 1;    // mid is too small, increase capacity
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case 1
    vector<int> weights1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int days1 = 5;

    cout << "Test Case 1 Output: " << solver.shipWithinDays(weights1, days1) << " (Expected: 15)" << endl;
    
    // Test Case 2
    vector<int> weights2 = {3, 2, 2, 4, 1, 4};
    int days2 = 3;
    cout << "Test Case 2 Output: " << solver.shipWithinDays(weights2, days2) << " (Expected: 6)" << endl;
    
    return 0;
}