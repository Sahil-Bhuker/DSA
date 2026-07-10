class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int maX = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==1){
                ans ++;
                maX = max(maX, ans);
            }else{
                ans = 0;
            }
        }
        return maX;
        }
};