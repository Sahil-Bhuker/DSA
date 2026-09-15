class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while (start < end) {
            while (start < end && !isalnum((unsigned char)s[start])) start++;
            while (start < end && !isalnum((unsigned char)s[end]))   end--;
            if (tolower((unsigned char)s[start]) != tolower((unsigned char)s[end]))
                return false;
            start++;
            end--;
        }
        return true;
    }
};