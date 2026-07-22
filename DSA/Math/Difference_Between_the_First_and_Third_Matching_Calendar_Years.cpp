#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isLeap(long long year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    // day-of-week offset (0-6) for Jan 1 of 'year', using the accurate Gregorian rule
    long long oddDays(long long year) {
        long long y = year - 1;
        long long odd = y + y / 4 - y / 100 + y / 400;
        return odd % 7;
    }
    //a function to find the difference between the first and third matching calendar years
        //a matching calendar year is defined as a year that has the same leap year status and the same day-of-week offset for January 1st as the given year
    int yearDiff(int year) {
        long long baseOdd = oddDays(year);
        bool baseLeap = isLeap(year);

        vector<long long> matches;
        long long y = (long long)year + 1;

        while ((long long)matches.size() < 3) {
            if (isLeap(y) == baseLeap && oddDays(y) == baseOdd) {
                matches.push_back(y);
            }
            y++;
        }

        return (int)(matches[2] - matches[0]);
    }
};
int main(){
    int year;
    cin >> year;
    Solution sol;
    cout << sol.yearDiff(year) << endl;
    return 0;
}
