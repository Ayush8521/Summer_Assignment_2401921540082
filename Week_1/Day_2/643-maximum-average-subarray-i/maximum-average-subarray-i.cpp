class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long ans = 0;
        //storing sum of first k ele
        for(int i=0; i<k; i++){
            ans = ans + nums[i];
        }
        long long maximumSum =ans;

        //now sliding the window
        for(int i= k; i<nums.size();i++){
            ans = ans+ (nums[i]-nums[i-k]);
            maximumSum = max(maximumSum, ans);
        }
        return (double)maximumSum/k;
    }
};
