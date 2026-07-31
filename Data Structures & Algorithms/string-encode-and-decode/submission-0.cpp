class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        for(auto &it:strs){
            ans+= to_string(it.size())+'#'+it;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>result;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
               j++;
            }
                int len=stoi(s.substr(i,j-i));
                result.push_back(s.substr(j+1,len));
                i=len+j+1;
        }
        return result;
    }
};
