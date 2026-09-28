class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;       
        for (int i = s.length() - 1; i > 0; i--) {
            int curr = (s[i] - '0') + carry;
            
            if (curr == 1) {
                steps += 2;
                carry = 1; 
            } else {
                 steps += 1;
                carry = (curr== 2) ? 1 : 0;
            }
        } return steps + carry;
    }
};
