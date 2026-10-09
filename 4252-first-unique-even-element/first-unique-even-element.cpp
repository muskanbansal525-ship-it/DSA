class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
    unordered_map<int,int>mp;
  for(int num : nums){
            if(num % 2 == 0){
                mp[num]++;
            }
        } 
     for( int i: nums){
        if( i%2==0 && mp[i]==1 ){
            return i;
        }
     }
     return -1;
    }
};