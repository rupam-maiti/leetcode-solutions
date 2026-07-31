class Solution {
public:
    int maxProduct(int n) {
        int digits[10];
        int count=0;
  while(n>0){
    digits[ count++]=n%10;
   
    n=n/10;
  }
  int maxprod=0;
  for(int i=0;i<count;i++){
    for(int j=i+1;j<count;j++){
        int prod=digits[i]*digits[j];
         maxprod=max(maxprod,prod);
    }
  }

    return maxprod;
    }
};