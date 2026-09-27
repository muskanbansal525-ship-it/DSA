class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start = 0;
        int end = arr.size() - 1;
        while (end - start + 1 > k) {
            if (abs(arr[start] - x) > abs(arr[end] - x)) {
                start++;
            } else {
                end--;
            }
        }    
        return vector<int>(arr.begin() + start, arr.begin() + end + 1);
    }
};
