class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>count;
        //count each character
        for(char c:s){
            count[c]++;
        }
        //check which character occur once.
        for(int i=0; i<s.size(); i++){
            if(count[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};