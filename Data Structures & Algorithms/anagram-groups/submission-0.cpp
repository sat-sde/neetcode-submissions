class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>ans;
        for(auto it:strs){
            string s=it;
            sort(it.begin(),it.end());
            mpp[it].push_back(s);
        }
        for(auto it:mpp){
            vector<string>temp;
            for(auto i:it.second){
                temp.push_back(i);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
