#include <vector>

class Solution {
private:
    int mergeSort(std::vector<long long>& sums, int start, int end, int lower, int upper) {
        if (end - start <= 1) return 0;
        
        int mid = start + (end - start) / 2;
        // Recursively count in left and right halves
        int count = mergeSort(sums, start, mid, lower, upper) + 
                    mergeSort(sums, mid, end, lower, upper);
        
        int j = mid, k = mid, t = mid;
        std::vector<long long> cache(end - start);
        int r = 0;
        
        // Count range sums crossing the midpoint and merge subarrays
        for (int i = start; i < mid; ++i) {
            // Find the first index j where sums[j] - sums[i] >= lower
            while (j < end && sums[j] - sums[i] < lower) j++;
            // Find the first index k where sums[k] - sums[i] > upper
            while (k < end && sums[k] - sums[i] <= upper) k++;
            
            // Standard merge sort step: copy smaller elements from right half
            while (t < end && sums[t] < sums[i]) {
                cache[r++] = sums[t++];
            }
            cache[r++] = sums[i];
            
            // The number of valid sums[j] for the current sums[i]
            count += (k - j);
        }
        
        // Copy remaining element from the right half if any
        while (t < end) {
            cache[r++] = sums[t++];
        }
        
        // Overwrite the original sums array with the sorted elements
        for (int i = 0; i < cache.size(); ++i) {
            sums[start + i] = cache[i];
        }
        
        return count;
    }

public:
    int countRangeSum(std::vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        std::vector<long long> sums(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            sums[i + 1] = sums[i] + nums[i];
        }
        
        return mergeSort(sums, 0, n + 1, lower, upper);
    }
};
