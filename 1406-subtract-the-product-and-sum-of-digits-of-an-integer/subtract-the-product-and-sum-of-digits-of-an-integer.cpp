class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        int original=n;
       while(n>0){
        int digit=n%10;
        product=product*digit;
        n=n/10;
       }
       while(original>0){
       int digit=original%10;
        sum=sum+digit;
        original=original/10;
       }
        int result=product-sum;
       return result;
    }
};