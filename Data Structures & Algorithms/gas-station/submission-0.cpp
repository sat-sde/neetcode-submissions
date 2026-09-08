class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalearn=0;
        int totallost=0;
        for (int i = 0; i < n; i++) {
          totalearn+=gas[i];
          totallost+=cost[i];
        }
        if(totalearn<totallost){
            return -1;
        }

        int total=0;
        int result=0;
        int i=0;
        while(i<n){
            total+=gas[i]-cost[i];
            if(total<0){
                total=0;
                result=i+1;
            }
            i++;
        }
        return result;
    }
};