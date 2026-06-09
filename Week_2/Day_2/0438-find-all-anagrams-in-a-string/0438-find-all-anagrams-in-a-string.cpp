class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n =s.size();
        int k= p.size();

        if (k > n) return ans;

        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);

        // First window
        for (int i = 0; i < k; i++) {
            cnt1[p[i] - 'a']++;
            cnt2[s[i] - 'a']++;
        }

        if (cnt1 == cnt2)
            ans.push_back(0);

        // Sliding window
        for (int i = k; i < n; i++) {
            cnt2[s[i] - 'a']++;       // add new char
            cnt2[s[i - k] - 'a']--;   // remove old char

            if (cnt1 == cnt2) {
                ans.push_back(i -k + 1);
            }
        }

        return ans;
    }
};