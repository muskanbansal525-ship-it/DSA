class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
         int r =0;
          for(char  i : s){
            depth+=(i =='(')-(i==')');
            r=max(r,depth);
          }
          return r;
    }
};