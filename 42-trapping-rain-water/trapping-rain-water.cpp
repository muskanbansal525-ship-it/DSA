class Solution {
public:
    int trap(vector<int>& height) {
        int left =0;
        int right = height.size()-1; 
        int leftside =0;
        int rightside =0;
        int maxwater =0;
         while ( left<=right){
             if ( height[left]<height[right]){
                 if(leftside <= height[left]){
                     leftside = height[left];
                 }
                  else {
                    maxwater+=leftside-height[left];
                }
             left++;
             }
             else {
                  if ( rightside <=height[right]){
                     rightside = height[right];
                  }
                   else {
                    maxwater+=rightside-height[right];
                }
                  right--;
             }
         }
         return maxwater;
    }
};