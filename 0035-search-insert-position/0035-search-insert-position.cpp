class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    //     for (int i = 0; i < nums.size(); i++) {
    //     if (target <= nums[i]) {
    //         return i;
    //     }
    // }
    // return nums.size();
        int l = 0, r = nums.size();
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] >= target) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        return r;
    }
    
};