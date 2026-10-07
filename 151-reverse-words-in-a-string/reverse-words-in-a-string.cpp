class Solution {
public:
    string reverseWords(string s) {

        int right = s.length() - 1;
        string ans = "";
        while (right >= 0) {
            while (right >= 0 && s[right] == ' ') {
                right--;
            }
            if (right < 0) {
                break;
            }
            int end = right;
            while (right >= 0 && s[right] != ' ') {
                right--;
            }
            if (ans.length() > 0) {
                ans += " ";
            }
            for (int i = right + 1; i <= end; i++) {
                ans += s[i];
            }
        }

        return ans;
    }
};