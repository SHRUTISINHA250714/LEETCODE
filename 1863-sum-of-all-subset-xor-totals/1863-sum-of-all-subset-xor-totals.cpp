class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
    int n = nums.size();
    int totalXOR = 0;
    int totalSubsets = 1 << n;

    for (int i = 0; i < totalSubsets; ++i) {
        int currentXOR = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                currentXOR ^= nums[j];
            }
        }
        totalXOR += currentXOR;
    }

    return totalXOR;
  }
};