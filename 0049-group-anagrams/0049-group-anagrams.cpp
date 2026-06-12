#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        
        //store sorted and previous in pair
        vector<pair<string, string>> arr;

        for(int i=0; i<n; i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            arr.push_back({key, strs[i]});  
        }

        //sorting
        sort(arr.begin(), arr.end());
        //group adjacent anagram
        vector<vector<string>> result;

        for(int i = 0; i<n; ){
            vector<string> temp;
            string currkey = arr[i].first;

            while(i<n && arr[i].first == currkey){
                temp.push_back(arr[i].second);
                i++;
            }
            result.push_back(temp);
        }
        return result;
    }
};