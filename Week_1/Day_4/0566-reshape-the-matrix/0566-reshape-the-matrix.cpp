class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        int o = m*n;
        // checking size is equal or not
        if(m*n < r*c || m*n > r*c){
            return mat;
        }
        vector<vector<int>> res(r, vector<int>(c,0));  //creating a result var
        for(int i=0; i<o; i++){
            res[i/c][i%c] = mat[i/n][i%n];  //main formula that is using to calculate matrix
        }
        return res;
    }
};