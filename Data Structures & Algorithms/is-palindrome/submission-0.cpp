class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(auto &it:s){
            if(it==' ') continue;
            else if(isalnum(it)) t+=tolower(it);
        }
        s=t;
        reverse(t.begin(),t.end());
        if(s==t) return true;
        return false;
    }
};
