class Solution {
public:
    int dp[101];
    int solve(int i, vector<int>&cost) {
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int take = cost[i] + solve(i - 2, cost);
        int notake=solve(i-1,cost);
        return dp[i]=max(take,notake);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<101;i++) dp[i]=-1;
        return solve(n-1,nums);
    }
};
