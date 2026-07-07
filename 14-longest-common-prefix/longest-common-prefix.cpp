class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string ans = "";
        int count = 1;
        int sz = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            sz = min(sz, (int)strs[i].size());
        }       
        for(int i = 0 ; i < sz; i++){
            char ch = strs[0][i];
            for(int j = 1 ; j < strs.size(); j++){
                if(strs[j][i] == ch) count++;
                else break;
            }
            if(count==strs.size()) ans.push_back(ch);
            else break;

            count = 1;
        }
        return ans;
    }
};