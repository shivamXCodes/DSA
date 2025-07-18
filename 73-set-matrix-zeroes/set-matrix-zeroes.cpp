class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row;
    vector<int> column;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                row.push_back(i);
                column.push_back(j);
            }
        }
    }

    for (int i=0;i<row.size();i++) {
        for (int j = 0; j < n; j++) {
            matrix[row[i]][j] = 0;
        }
    }
    for (int j=0;j<column.size();j++) {
        for (int i = 0; i < m; i++) {
            matrix[i][column[j]] = 0;
        }
    }
    }
};