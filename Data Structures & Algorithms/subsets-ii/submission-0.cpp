class Solution {
public:
    void solve(int ind,vector<int>&nums,vector<int>&ans,vector<vector<int>>&result){
        result.push_back(ans);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ans.push_back(nums[i]);
            solve(i+1,nums,ans,result);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>result;
        vector<int>ans;
        solve(0,nums,ans,result);
        return result;
    }
};
