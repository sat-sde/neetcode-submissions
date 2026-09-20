class Solution {
public:
    int dp[101];
    int solve(int i, int j, vector<int>& nums) {
        if (i > j) return 0;
        if (dp[i] != -1) return dp[i];
        int take = nums[i] + solve(i + 2, j, nums);
        int notake = solve(i + 1, j, nums);
        return dp[i] = max(take, notake);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        // Case 1: houses [0 ... n-2]
        for (int i = 0; i < 101; i++)
            dp[i] = -1;
        int case1 = solve(0, n - 2, nums);
        // Case 2: houses [1 ... n-1]
        for (int i = 0; i < 101; i++)
            dp[i] = -1;
        int case2 = solve(1, n - 1, nums);
        return max(case1, case2);
    }
};