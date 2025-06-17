class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i{}; i < matrix.size(); i++)
            for (int j=i; j < matrix[0].size(); j++) {
                if (i != j)
                    swap(matrix[i][j], matrix[j][i]);
            }
        for (int i{}; i < matrix.size(); i++)
            for (int j{}; j < (matrix[0].size()) / 2; j++) {
            swap(matrix[i][j], matrix[i][matrix[0].size() - 1 - j]);
            }
    }
};