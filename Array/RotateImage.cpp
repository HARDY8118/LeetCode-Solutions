class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(unsigned int i=0;i<matrix.size();i++){
            for(unsigned int j=i;j<matrix[i].size();j++){
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }
        for(unsigned int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};