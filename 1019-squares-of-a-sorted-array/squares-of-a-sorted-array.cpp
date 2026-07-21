class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> res;

        for(int &el : nums){
            if(el<0){
                a.push_back(el*el);
            }else b.push_back(el*el);
        }

        int i = a.size()-1;
        int j = 0;

        while(i>=0 && j<b.size()){
            if(a[i]>=b[j]){
                res.push_back(b[j]);
                j++;
            }else{
                res.push_back(a[i]);
                i--;
            }
        }
        while(i>=0){
            res.push_back(a[i]);
            i--;
        }
        while(j<b.size()){
            res.push_back(b[j]);
            j++;
        }

        return res;
    }
};