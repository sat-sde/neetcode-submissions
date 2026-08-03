class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int p=0;
        int buy=prices[0];
        for(int i=0;i<n;i++){
            buy=min(buy,prices[i]);
            p=max(p,prices[i]-buy);
        }
    return p;
    }
};
