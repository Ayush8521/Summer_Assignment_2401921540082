class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum = sum + matrix[i][i]; //sum of primary diagonal 
            sum = sum + matrix[i][n-1-i];  //sum of secondary diagonal 
        }
        if(n%2 == 1){
            // sub centered element in case Odd mat size.
            sum = sum-matrix[n/2][n/2];  
        }
        return sum;

    }
};