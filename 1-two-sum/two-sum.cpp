class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int>mp;
         for(int i =0;i<=nums.size()-1;i++){
          int sec = target-nums[i];
          if(mp.find(sec)!=mp.end()){
            return {
                i,mp[sec] };
          }
          mp[nums[i]]=i;
         }
         return{};
    }
};