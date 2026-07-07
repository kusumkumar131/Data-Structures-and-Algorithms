#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> s;
        long long total_sum = 0;
        long long MOD = 1e9 + 7;

        // Find the strictly smaller element to the left
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        // Clear the stack to reuse it
        while (!s.empty()) s.pop();

        // Find the smaller or equal element to the right
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        // Calculate the contribution of each element
        for (int i = 0; i < n; ++i) {
            long long left_count = i - left[i];
            long long right_count = right[i] - i;
            long long contribution = (left_count * right_count) % MOD;
            contribution = (contribution * arr[i]) % MOD;
            total_sum = (total_sum + contribution) % MOD;
        }

        return total_sum;
    }
};

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: ";
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    cout << "Enter " << n << " integers separated by spaces:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution solver;
    int result = solver.sumSubarrayMins(arr);

    cout << "--- Output ---\n";
    cout << "Sum of Subarray Minimums: " << result << "\n";

    return 0;
}