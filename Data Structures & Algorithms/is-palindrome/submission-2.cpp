class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ch;
        for(int i=0;i<s.length();i++){
            if((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')
             || (s[i] <= '9' && s[i] >= '0')){
                ch.push_back(s[i]);
            } 
        }
        int n = ch.size();
        for(int i=0;i<(n/2);i++){
            if(tolower(ch[i]) != tolower(ch[n-i-1])) return false;
        }
        return true;
    }
};
