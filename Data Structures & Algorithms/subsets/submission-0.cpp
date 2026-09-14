class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int num=0;num<subsets;num++){
            vector<int>ans;
            for(int i=0;i<n;i++){
                if(num & (1<<i)) ans.push_back(nums[i]);
            }
            result.push_back(ans);
        }
        return result;
    }
};
