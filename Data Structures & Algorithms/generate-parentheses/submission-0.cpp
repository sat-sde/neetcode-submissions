class Solution {
public:
    void solve(int n,vector<string>&result,string curr,int open,int close){
        if(curr.length()==2*n){
            result.push_back(curr);
            return;
        }
        if(open<n){
            curr.push_back('(');
            solve(n,result,curr,open+1,close);
            curr.pop_back();
        }
        if(close<open){
             curr.push_back(')');
            solve(n,result,curr,open,close+1);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string curr="";
        int open=0;
        int close=0;
        solve(n,result,curr,open,close);
        return result;
    }
};
