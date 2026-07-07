class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long ans = 0;

        while(n>0){
            int last = n%10;
            if(last != 0) {
                sum = sum + last;
                ans = ans*10 + last;
            }
            n = n/10;
        }
        while(ans>0){
            int last = ans%10;
            n = n *10 + last;
            ans = ans / 10;
        }
    return n*sum;
    }
};