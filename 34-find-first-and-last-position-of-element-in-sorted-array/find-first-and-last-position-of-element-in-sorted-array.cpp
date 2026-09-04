class Solution {
public:
    int first(vector<int>& nums, int target){
        int l = 0;
        int r = nums.size()-1;
        int ans =-1;
        while(l<=r){
            int mid = (r + l) / 2;
            if(nums[mid]==target) {
                ans = mid;
                r = mid - 1;
            }
            else if(target>nums[mid]){
                l = mid+1;
            }else if(target<nums[mid]){
                r = mid-1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums, int target){
        int l = 0;
        int r = nums.size()-1;
        int ans =-1;
        while(l<=r){
            int mid = (r + l) / 2;
            if(nums[mid]==target) {
                ans = mid;
                l = mid + 1;
            }
            else if(target>nums[mid]){
                l = mid+1;
            }else if(target<nums[mid]){
                r = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstI = first(nums,target);
        int lastI = last(nums,target);
        return{firstI, lastI};
    }
};