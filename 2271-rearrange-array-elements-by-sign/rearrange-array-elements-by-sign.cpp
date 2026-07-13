class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>posi;
        vector<int>negi;

        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]>=0){
                posi.push_back(nums[i]);
            }else{
                negi.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;
        while(i<nums.size()){
            nums[i]= posi[j];
            i++;
            nums[i]=negi[j];
            i++;
            j++;
        }
        return nums;
    }
};