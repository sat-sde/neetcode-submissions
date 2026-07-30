class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        int n=nums.size();
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        while(k!=0){
            int el=pq.top().second;
            pq.pop();
            ans.push_back(el);
            k--;
        }
        return ans;
    }
};
