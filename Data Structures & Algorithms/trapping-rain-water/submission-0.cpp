class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pre(n),suf(n);
        pre[0]=height[0];
        for(int i=1;i<n-1;i++){
            pre[i]=max(pre[i-1],height[i]);
        }
        suf[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],height[i]);
        }
        int t=0;
        for(int i=0;i<n;i++){
            int lM=pre[i];
            int rM=suf[i];
            if(lM>height[i]  && height[i]<rM){
                t+= min(lM,rM)-height[i];
            }
        }
        return t;
    }
};
