class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        if(sl == tl){
            map<char,int> ans;
            for (int i = 0; i < s.length(); i++) {
            ans[s[i]]++;
            ans[t[i]]--;
        }
            for (auto it : ans) {
            if (it.second != 0) {
                return false;
            }
        }
            return true;
        }
        return false;
    }
};
