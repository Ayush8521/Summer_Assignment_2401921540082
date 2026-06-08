class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char, int>count;
       //count cchar in magazine
       for(char c: magazine){
        count[c]++;
       }
       //use them in ransomNote
       for(char c: ransomNote){
        if(count[c] == 0){
            return false;
        }
        count[c]--;
       }
       return true;
    }
};