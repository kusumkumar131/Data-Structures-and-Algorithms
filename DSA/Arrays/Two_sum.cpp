//code for two sum

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> num_map;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            cout << num_map[complement] << " " << i << endl;
            return 0;
        }
        num_map[nums[i]] = i;
    }

    cout << "No two sum solution" << endl;
    return 0;
}