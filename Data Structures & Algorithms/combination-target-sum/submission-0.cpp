class Solution {
public:
    void solve(int ind,vector<int>& nums,int target,vector<vector<int>>&result,vector<int>&ans){
        if(ind==nums.size()){
            if(target==0){
                result.push_back(ans);
            }
            return;
        }
        if(nums[ind]<=target){
            ans.push_back(nums[ind]);
            solve(ind,nums,target-nums[ind],result,ans);
            ans.pop_back();
        }
         solve(ind+1,nums,target,result,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        solve(0,nums,target,result,ans);
        return result;
    }
};
