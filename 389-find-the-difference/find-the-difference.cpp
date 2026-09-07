class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for(char &ch : t){
            res=res^ch;
        }
        for(char &ch : s){
            res = res ^ ch;
        }
        return res;
    }
};