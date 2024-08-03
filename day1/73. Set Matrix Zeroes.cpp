/*Intuition
First, identify all zero elements and record their row and column indices. Then, use these indices to set the corresponding rows and columns to zero in the matrix.

Approach
The approach for setting matrix rows and columns to zero when a zero is found can be summarized in the following steps:

Identify the Positions of Zeros:

Iterate through the matrix and record the positions (row and column indices) of all zero elements. Store these positions in two separate lists: one for rows and one for columns.
Set Entire Columns to Zero:

For each column index stored in the column list, iterate through each row of that column and set the elements to zero.
Set Entire Rows to Zero:

For each row index stored in the row list, iterate through each column of that row and set the elements to zero.
    */

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      vector<int>row;
      vector<int>col;
      for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[i].size(); j++){
            if(matrix[i][j]==0){
                row.push_back(i);
                col.push_back(j);
            }
        }
      } 
       for(int i=0; i<col.size(); i++){
        int cols= col[i];
        for(int j=0; j<matrix.size(); j++){
            matrix[j][cols]=0;
        }
       }
        for(int i=0; i<row.size(); i++){
            int rows= row[i];
            for(int j=0; j<matrix[rows].size(); j++){
                matrix[rows][j]=0;
            }
        }
        return;

    }
};
