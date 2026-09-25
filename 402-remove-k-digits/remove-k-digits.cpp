class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<char>st;
       int n = num.length();
      for(int i =0; i<=n-1;i++){
        while(!st.empty()&& k>0&& st.top()>num[i] ){
            st.pop();
            k--;
        }
         if (!st.empty() || num[i] != '0')
            st.push(num[i]);
    }
         while (!st.empty() && k--)
        st.pop();

    if (st.empty())
        return "0";
         while (!st.empty()) {
        num[n - 1] = st.top();
        st.pop();
        n -= 1;
    }
    return num.substr(n);
    }
};