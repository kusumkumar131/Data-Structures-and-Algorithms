#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; // Using a vector as a stack to easily read from bottom to top later
        
        for (int ast : asteroids) {
            bool destroyed = false;
            
            // Collision condition: top of stack is moving right (>0) and current is moving left (<0)
            while (!st.empty() && st.back() > 0 && ast < 0) {
                if (st.back() < abs(ast)) {
                    st.pop_back(); // Top asteroid explodes, keep checking previous ones
                    continue;
                } else if (st.back() == abs(ast)) {
                    st.pop_back(); // Both explode
                }
                destroyed = true; // Current incoming asteroid explodes
                break;
            }
            
            if (!destroyed) {
                st.push_back(ast);
            }
        }
        
        return st;
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of asteroids: ";
    if (!(cin >> n)) return 0;

    vector<int> asteroids(n);
    cout << "Enter " << n << " asteroid sizes (positive for right, negative for left):\n";
    for (int i = 0; i < n; ++i) {
        cin >> asteroids[i];
    }

    Solution solver;
    vector<int> result = solver.asteroidCollision(asteroids);

    cout << "--- Output ---\nState of asteroids after all collisions: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}