 class Solution{

    public:
    void paranthesis(int n, int left, int right, vector<string>&ans,string&st){
        if(left+right==2*n){
            ans.push_back(st);
            return;
        }
          if(left<n){
            st.push_back('(');
            paranthesis(n,left+1,right,ans,st);
            st.pop_back();

        }
         if(right<left){
            st.push_back(')');
            paranthesis(n,left,right+1,ans,st);
            st.pop_back();

        }
    }
     vector<string> generateParenthesis(int n){
           vector<string>ans;
           string st;
           paranthesis(n,0,0,ans,st);
           return ans;
     }
 };