class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n = nums.size();   //length
       //suppose starting element is 0
       int st = 0;
       for(int i=0; i<n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[st]);    //swap element with next one
            st++;
        }
       }
    }
};