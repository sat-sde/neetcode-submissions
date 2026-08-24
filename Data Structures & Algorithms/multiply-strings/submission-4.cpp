class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<int>res(num1.size()+num2.size());
        for(int i=0;i<num1.size();i++){
            int c=0;
            for(int j=0;j<num2.size();j++){
                int n1=num1[i]-'0';
                int n2=num2[j]-'0';
                int sum=(n1*n2)+res[i+j]+c;
                int b=sum%10;
                c=sum/10;
                res[i+j]=b;
            }
           if (c != 0)
                res[i + num2.size()] += c;
        }
        string ans="";
        int i=res.size()-1;
        while(i>=0 && res[i]==0) i--;
        while(i>=0){
            ans+=char(res[i--]+'0');
        }
        return ans;
    }
};
