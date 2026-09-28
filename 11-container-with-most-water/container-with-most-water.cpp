class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
         int right = height.size()-1;
           int  curr = 0;
             while ( left<right){
                  int ht = min ( height[left], height[right]);
                  int width =  right - left ;
                  
             curr = max( curr, ht*width);
              if ( height[left]<height[right]){
                 left++;
              }
               else {
                 right--;
               }
             }
              return curr;
    }
};