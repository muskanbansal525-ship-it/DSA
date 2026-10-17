class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; i++) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        int totalProfit = 0;
        int maxProfitSoFar = 0;
        int i = 0;
        for (int w : worker) {
            while (i < n && w >= jobs[i].first) {
                maxProfitSoFar = max(maxProfitSoFar, jobs[i].second);
                i++; 
            }
            totalProfit += maxProfitSoFar;
        }
        
        return totalProfit;
    }
};
