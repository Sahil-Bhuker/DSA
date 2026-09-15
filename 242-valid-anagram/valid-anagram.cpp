class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())return false;
        vector<int> f(26,0);
        for(int i = 0; i< s.length(); i++){
            f[s[i]-'a']++;
        }
        for(int i = 0; i< t.length(); i++){
            f[t[i]-'a']--;
        }
        for(int i = 0 ; i< 26; i++){
            if(f[i]!=0) return false;
        }
    return true;
    }
};