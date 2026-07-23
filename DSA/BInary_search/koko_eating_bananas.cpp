#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canEat(vector<int>& piles, int h, int speed) {
        long long hours = 0;

        for (int bananas : piles) {
            hours += (bananas + speed - 1) / speed; // ceiling division
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canEat(piles, h, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};

int main() {
    int n;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);

    cout << "Enter the piles: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int h;
    cout << "Enter number of hours: ";
    cin >> h;

    Solution obj;
    cout << "Minimum eating speed: " << obj.minEatingSpeed(piles, h) << endl;

    return 0;
}