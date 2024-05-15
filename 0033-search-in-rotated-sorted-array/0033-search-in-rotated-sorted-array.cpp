class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target) 
        //         return i;
        // }
        // return -1;
        auto it = find(nums.begin(), nums.end(), target); 
        if (it != nums.end())  
            return it - nums.begin(); 
        else 
            return -1;
    }
};