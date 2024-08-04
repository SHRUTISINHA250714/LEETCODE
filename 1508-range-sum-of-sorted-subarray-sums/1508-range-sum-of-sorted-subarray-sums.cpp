// class Solution {
// public:
//     int rangeSum(vector<int>& nums, int n, int left, int right) {
//         int subsets = 1 << n;
//         vector<int> output;
        
//         for (int num = 0; num < subsets; num++) {
//             int sum = 0;
//             for (int i = 0; i < n; i++) {
//                 if (num & (1 << i)) {
//                     sum = (sum + nums[i]) % (int)(pow(10, 9) + 7);
//                 }
//             }
//             output.push_back(sum);
//         }
        
//         sort(output.begin(), output.end());
        
//         int finalSum = 0;
//         for (int i = left; i <= right; i++) {
//             finalSum = (finalSum + output[i]) % (int)(pow(10, 9) + 7);
//         }
        
//         return finalSum;
//     }
// };
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarraySums;
        int mod = pow(10, 9) + 7;

        for (int i = 0; i < n; ++i) {
            int currentSum = 0;
            for (int j = i; j < n; ++j) {
                currentSum = (currentSum + nums[j]) % mod;
                subarraySums.push_back(currentSum);
            }
        }

        sort(subarraySums.begin(), subarraySums.end());

        int finalSum = 0;
        for (int i = left - 1; i < right; ++i) {
            finalSum = (finalSum + subarraySums[i]) % mod;
        }

        return finalSum;
    }
};
