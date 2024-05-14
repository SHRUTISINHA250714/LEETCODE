class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         if(nums.size()==1){
//             if (nums[0]==1)
//                 return 2;
//             else
//                 return 1;
//         }
            
        
        
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<0)
//                 i++;
//             else{
//                 auto it = find(nums.begin(), nums.end(),i );
//                 if (it == nums.end()) {
//                     return i;
//                 }
                    
//             }
            
//         }
//         return nums.size();
//     }
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