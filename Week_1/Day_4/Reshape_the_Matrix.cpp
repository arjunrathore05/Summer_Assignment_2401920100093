class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();

        if(row * col != r * c) return mat;
        vector<vector<int>> final(r, vector<int>(c));
        vector<int> v;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                v.push_back(mat[i][j]);
            }}
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                int t = v.back();
                v.pop_back();
                final[i][j] = t;
            }
        }
        return final;
    }
};    
