class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
      sort(players.begin(),players.end());
      sort( trainers.begin(),trainers.end());
       int count = 0 ;
       int i =0;
       int j =0;
        while ( i <=players.size()-1 && j<=trainers.size()-1){
             if( players[i]<=trainers[j]){
                i++;
            count++;
             }
         j++;
        } 
        return count; 
    }
};