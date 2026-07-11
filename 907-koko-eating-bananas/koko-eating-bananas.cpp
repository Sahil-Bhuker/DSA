class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = INT_MAX;
        while(l<=r){
            int mid = (l+r)/2;
            long hr = 0; 

            for(int i = 0; i<piles.size(); i++){
                if(mid>=piles[i]) hr = hr + 1;
                else if(piles[i]%mid>0){
                    hr = hr + 1 + (piles[i]/mid);
                }else hr = hr + piles[i]/mid;
            }

            if(hr <= h){
                r = mid - 1;
                ans = min(mid,ans);
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
};