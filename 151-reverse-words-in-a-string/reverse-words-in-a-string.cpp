class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i = s.size() - 1;

        while (i >= 0) {

            // Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            // Find the end of the word
            int end = i;

            // Move to the beginning of the word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            // Add space before every word except the first
            if (!ans.empty()) {
                ans += ' ';
            }

            // Add the word
            ans += s.substr(i + 1, end - i);
        }

        return ans;
    }
};