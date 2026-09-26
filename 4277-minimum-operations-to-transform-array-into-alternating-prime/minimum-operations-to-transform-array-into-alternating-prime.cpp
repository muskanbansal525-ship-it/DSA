class Solution {
public:
    bool isPrime(int x) {
        if (x < 2)
            return false;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0)
                return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i <= n - 1; i++) {
            if (i % 2 == 0) {
                while (!isPrime(nums[i])) {
                    nums[i]++;
                    count++;
                }
            }
            else {
                if (!isPrime(nums[i])) {
                    continue;
                }
                if (nums[i] == 2) {
                    nums[i]++;
                    nums[i]++;
                    count += 2;
                }
                else {
                    nums[i]++;
                    count++;
                }
            }
        }

        return count;
    }
};