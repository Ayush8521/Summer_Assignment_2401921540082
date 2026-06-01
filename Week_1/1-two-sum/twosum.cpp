class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++) {
            int ans = target - nums[i];
            // Check if the complement exists in the map
            if(mp.find(ans) != mp.end()) {
                return {mp[ans], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
