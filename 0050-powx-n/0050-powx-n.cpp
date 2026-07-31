class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long binary=n;
        if(binary<0){
            x=1/x;
            binary=-binary;
        }
        while(binary>0){
            if(binary%2==1){
                ans=ans*x;
            }
            x=x*x;
            binary=binary/2;
        }
        return ans;
    }
           
};