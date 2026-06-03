class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int l=0;
        int r=n-1;
        int pos = n-1;  //positiion pointer
        while(l<=r){
            int lSquare = nums[l]*nums[l];   //calculating left squaree
            int rSquare = nums[r]*nums[r];   // right square
            if(lSquare > rSquare){
                ans[pos] = lSquare;
                l++;
            } else{
                ans[pos] = rSquare;
                r--;
            }
            pos--;
        }
        return ans;

    }
};