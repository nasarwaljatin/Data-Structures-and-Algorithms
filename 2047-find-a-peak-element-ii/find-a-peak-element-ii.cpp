class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& A) {
        int c = A[0].size();
        int low = 0, high = c - 1;
        while (low <= high) {
            int mid = (low + high) >> 1;
            int row = 0;
            for (int i = 1; i < A.size(); i++){
                if (A[i][mid] > A[row][mid])
                    row = i;
            }
            int left = mid - 1 >= 0 ? A[row][mid - 1] : -1;
            int right = mid + 1 < c ? A[row][mid + 1] : -1;
            if (A[row][mid] > left && A[row][mid] > right)
                return {row, mid};
            else if (A[row][mid] < left)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return {-1, -1};
    }
};