class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        long long maxSum = 0;
        long long windowSum = 0;
        
        unordered_set<int> st;

        int l = 0;
        int r = 0;

        while(r<n){
            while(st.count(nums[r])){
                st.erase(nums[l]);
                windowSum = windowSum - nums[l];
                l++;
            }
            windowSum += nums[r];
            st.insert(nums[r]);

            if(st.size() == k){
                maxSum = max(maxSum, windowSum);
                st.erase(nums[l]);
                windowSum = windowSum - nums[l];
                l++;
            }
            r++;
        }
        return maxSum;
    }
       
        
};