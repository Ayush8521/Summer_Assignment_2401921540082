class Solution {
public:
    string longestPalindrome(string s) {
        int resIdx = 0;
        int resLen = 0;
        for(int i=0; i<s.size(); i++){
            //odd length
            int l = i, r=i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                if(r-l+1 > resLen){
                    resIdx = l;
                    resLen = r-l+1;
                }
                l--;
                r++;
            }
            //even length
            int l2=i, r2=i+1;
            while(l2>=0 && r2<s.size() && s[l2] == s[r2]){
                if(r2-l2+1 > resLen){
                    resIdx = l2;
                    resLen = r2-l2+1;
                }
                l2--;
                r2++;
            }
        }
        return s.substr(resIdx, resLen);
    }
};