class Solution {
public:
    int reverse(int x) {
        int reverseNumber=0;
        int digits=1;
        

        while(x!=0){
            digits=x%10;
            // for over flow condition
            if(reverseNumber>INT_MAX/10 || reverseNumber<INT_MIN/10){
                return 0;
            }
            reverseNumber=(reverseNumber*10)+digits;
            x=x/10;
        }
        return reverseNumber;
    }
};