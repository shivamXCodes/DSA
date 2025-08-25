class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startRow = 0;
        int startCol =0;

        int endCol = n-1;
        int endRow = n-1;
        int count=0;
        int total = n*n;
        int num =1;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        while(count<total){
            for(int index = startCol;index<=endCol && count<total;index++ ){
                matrix[startRow][index] = num++;
                count++;
            }
            startRow++;
            for(int index = startRow;index<=endRow && count<total;index++ ){
                matrix[index][endCol] = num++;
                count++;
            }
            endCol--;
            for(int index = endCol;index>=startCol && count<total;index-- ){
                matrix[endRow][index] = num++;
                count++;
            }
            endRow--;
            for(int index = endRow;index>=startRow && count<total;index-- ){
                matrix[index][startCol] = num++;
                count++;
            }
            startCol++;
        }
        return matrix;
    }
};