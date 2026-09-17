class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.length(), n2 = t.length();
        unordered_map<char,char>StoT, TtoS;
        if(n1 != n2) return false;
        for(int i = 0; i<n1; i++){
            char s1 = s[i], t1 = t[i];
            if(StoT.count(s1) && StoT[s1] != t1)return false;
            if(TtoS.count(t1) && TtoS[t1] != s1)return false;
            StoT[s1] = t1;
            TtoS[t1] = s1;
        }
        return true;
    }
};