class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //sort every elements
        sort(nums.begin(), nums.end());
        //traverse through the loop and check every element with previouss element
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
            
        }
        return false;
    }
};