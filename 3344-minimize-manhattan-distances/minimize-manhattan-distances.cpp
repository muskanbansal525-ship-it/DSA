class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) {
        multiset<long long>plus,minus;
        for(auto i:points){
            plus.insert(i[0]+i[1]);
            minus.insert(i[0]-i[1]);
        }
        long long maximum=LONG_MAX;
        for(int j=0;j<points.size();j++){
            
            int sum = points[j][0]+points[j][1];
            int diff = points[j][0]-points[j][1];
            plus.erase(plus.lower_bound(sum));
            minus.erase(minus.lower_bound(diff));
            
            maximum = min(maximum,max((*plus.rbegin()-*plus.begin()),(*minus.rbegin()-*minus.begin())));
            plus.insert(sum);
            minus.insert(diff);
        }
        return maximum;
    }
};