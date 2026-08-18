class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int a = word1.length();
        int b = word2.length();
        int n;
        if(a<b) n = a;
        else n=b;
        for(int i=0;i<n;i++){
            ans += word1[i];
            ans += word2[i];
        }
        if(b>a){
            for(int i=a;i<b;i++){
                ans += word2[i];
            }
        }else{
            for(int i=b;i<a;i++){
                ans += word1[i];
            }
        }
        return ans;
    }
};