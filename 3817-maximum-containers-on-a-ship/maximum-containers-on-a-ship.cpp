class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
      int i = maxWeight/w;
       if ( i <=n*n){
         return i;
       }  
        else {
          return n*n;   
        }
    }
};