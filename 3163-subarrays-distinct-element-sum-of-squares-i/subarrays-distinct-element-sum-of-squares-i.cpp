class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int  sum =0;
         for(int i =0; i<= nums.size()-1; i++){
   unordered_set<int>st;
    for(int  j = i ; j<= nums.size()-1; j++){
        st.insert(nums[j]);
         int dis =  st.size();
         sum+=dis*dis; 
    }
         }
       
         return sum;
    }
};