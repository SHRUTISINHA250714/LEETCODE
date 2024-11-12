class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // if (n == 0 || nums[n - 1] <= 0) 
        // return 1;
        // nums.erase(remove_if(nums.begin(), nums.end(), [](int x) { return x <= 0; }), nums.end());
        // n = nums.size();
        // if (n == 0 || nums[0] != 1) 
        //     return 1;
        // for (int i = 0; i < n - 1; i++) {
        //     if (nums[i + 1] - nums[i] > 1) 
        //         return nums[i] + 1;
        // }
        // return nums[n - 1] + 1;
    
        unordered_set<int> seen;
        for (int num : nums) {
           if (num > 0)
              seen.insert(num);
           }
        for (int i = 1; i <= nums.size() + 1; ++i) {
             if (seen.find(i) == seen.end())
                return i;
        }
        
        return 1; 
    }
        
    
};