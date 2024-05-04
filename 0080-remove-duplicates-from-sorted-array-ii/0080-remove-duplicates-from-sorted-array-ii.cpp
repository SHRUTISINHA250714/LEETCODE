class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for (int i = 0; i < nums.size(); ++i) {
        int count1=0;
        count1 = count(nums.begin(), nums.end(), nums[i]);
       for (int j = 0; j < nums.size(); ++j) {
             if(count1 > 2) {
                if (nums[j] == nums[i]) {
                    nums.erase(nums.begin() + j);
                    --count1;
                }
            }
        }
    }
    return nums.size();
   
    // for (int i = 0; i < nums.size(); ++i) {
    //     int count1 = std::count(nums.begin(), nums.end(), nums[i]);
    //     if (count1 > 2) {
    //         int occurrencesToRemove = count1 - 2;
    //         int removedCount = 0;
    //         for (int j = 0; j < nums.size(); ++j) {
    //             if (nums[j] == nums[i]) {
    //                 ++removedCount;
    //                 if (removedCount > 2) {
    //                     nums.erase(nums.begin() + j);
    //                     --j;
    //                     --count1;
    //                 }
    //             }
    //         }
    //     }
    // }
    // return nums.size();
    }
};