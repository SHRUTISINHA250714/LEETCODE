class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // int n = nums.size();
       // vector<int> temp(n + 1, 0);
       //  for (int i = 0; i < n; i++) {
       //      temp[nums[i]]++;
       //   }
       //  for (int i = 0; i <= n; i++) {
       //      if (temp[i] == 1)
       //          return i;
       //  }
       //  return 0;
        unordered_map<int, int> temp;
        for (int num : nums) {
            temp[num]++;
         }
        for (const auto& pair : temp) {
            if (pair.second == 1) {
                 return pair.first;
             }
         }
         return 0;
    }
};