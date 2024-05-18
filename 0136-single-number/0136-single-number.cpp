class Solution {
public:
    int singleNumber(vector<int>& nums) {
//        if(nums.size()==1)
//            return nums[0];
//         vector<int> temp(nums.size() + 1, 0);
//         for (int i = 0; i < nums.size(); i++) {
//             temp[nums[i]]++;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(temp[i]==1)
//                 return  i;
//         }
//         return 0;
        
//     }
     if (nums.size() == 1) {
        return nums[0];
    }

    unordered_map<int, int> count;
    for (int num : nums) {
        count[num]++;
    }

    for (int num : nums) {
        if (count[num] == 1) {
            return num;
        }
    }

    return 0;
   
        
}
};