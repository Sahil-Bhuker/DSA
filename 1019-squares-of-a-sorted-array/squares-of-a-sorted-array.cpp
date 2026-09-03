class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        vector<int>result(n,0);
        int k =n-1;
        while(start<=end){
            if(abs(nums[start]) > abs(nums[end])){
                result[k--]=nums[start]*nums[start];
                start++;
            }else{
                result[k--] = nums[end]*nums[end];
                end--;
            }
        }
        return result;
    }
};