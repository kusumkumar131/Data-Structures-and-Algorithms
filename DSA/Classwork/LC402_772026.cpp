#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {

        if (num.length() <= k)
            return "0";

        string result;

        for (char digit : num) {

            while (!result.empty() && result.back() > digit && k > 0) {
                result.pop_back();
                k--;
            }

            result.push_back(digit);
        }

        while (k > 0 && !result.empty()) {
            result.pop_back();
            k--;
        }

        int start = 0;

        while (start < result.size() && result[start] == '0')
            start++;

        result = result.substr(start);

        if (result.empty())
            return "0";

        return result;
    }
};

int main() {

    Solution obj;

    string num;
    int k;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter k: ";
    cin >> k;

    cout << "Smallest Number: " << obj.removeKdigits(num, k);

    return 0;
}