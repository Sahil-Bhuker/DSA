class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1) return false;
        int res = 1;
        for(int i = 2; i*1<num; i++){
            if(num%i==0){
                res = res + i;
            }
        }
        if(res == num){
            return true;
        }
        return false;
    }
};