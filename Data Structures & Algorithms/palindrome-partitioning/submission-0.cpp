class Solution {
public:

    bool ispalindrome(string &t){
        int n=t.length();
        int start=0;
        int end=n-1;
        while(start<=end){
            if(t[start]!=t[end]){
              return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void f(string s,vector<vector<string>>&ans,vector<string>&part){
        int n=s.length();

        if(s.length()==0){
            ans.push_back(part);
            return;
        }
        for(int i=0;i<n;i++){
            string t=s.substr(0,i+1);
            if(ispalindrome(t)){
                part.push_back(t);
                f(s.substr(i+1),ans,part);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.length();
        vector<vector<string>>ans;
        vector<string>part;
        f(s,ans,part);
        return ans;
    }
};