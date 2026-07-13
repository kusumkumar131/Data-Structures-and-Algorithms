#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    {
        int rows = mat.size();
        int cols = mat[0].size();
        
        int low = 0;
        int high = cols - 1;
        
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            
            // Find the row index containing the maximum value in the middle column
            int maxRow = 0;
            for (int r = 0; r < rows; ++r) 
            {
                if (mat[r][mid] > mat[maxRow][mid]) 
                {
                    maxRow = r;
                }
            }
            
            // Boundary checks for left and right neighbors
            bool leftIsGreater = (mid > 0 && mat[maxRow][mid] < mat[maxRow][mid - 1]);
            bool rightIsGreater = (mid < cols - 1 && mat[maxRow][mid] < mat[maxRow][mid + 1]);
            
            if (leftIsGreater) 
            {
                // Peak lies in the left half
                high = mid - 1;
            } 
            else if (rightIsGreater) 
            {
                // Peak lies in the right half
                low = mid + 1;
            } 
            else 
            {
                // Found a peak element
                
                return {maxRow, mid};
            }
        }
        
        return {-1, -1};
    }
};
