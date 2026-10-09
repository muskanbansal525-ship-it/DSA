
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        if (s[0] == '-') {
            std::reverse(s.begin() + 1, s.end());
        } else {
            std::reverse(s.begin(), s.end());
        }
        
        long long reversed_val = std::stoll(s);
        
        if (reversed_val > INT_MAX || reversed_val < INT_MIN) {
            return 0; 
        }
        
        return static_cast<int>(reversed_val);
    }
};
