class Solution {
public:
    void solve(int ind,vector<int>& nums, int target,vector<int>&ans,vector<vector<int>>&result){
        if(target==0){
            result.push_back(ans);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            if(nums[i]<=target){
                ans.push_back(nums[i]);
                solve(i+1,nums,target-nums[i],ans,result);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>&nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>ans;
        solve(0,nums,target,ans,result);
        return result;
    }
};
