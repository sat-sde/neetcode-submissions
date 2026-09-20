class Solution {
public:
    int dp[102]={};
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp[n]=0;
        dp[n+1]=0;
        for(int i=n-1;i>=0;i--){
            int take = nums[i] + dp[i+2];
            int notake = dp[i+1];
            dp[i]=max(take,notake);
        }
        return dp[0];
    }
};
