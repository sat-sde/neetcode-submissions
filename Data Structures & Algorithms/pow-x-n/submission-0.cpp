class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x=1/x;
            n=-n;
        }
        double ans=1.0;
        while(n>0){
            if(n&1){
                 ans = (ans*x);
            }
            x = x*x;
            n/=2;
        }
        return ans;
    }
};
