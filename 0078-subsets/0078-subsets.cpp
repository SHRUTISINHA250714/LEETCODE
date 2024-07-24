class Solution {
// private:
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
//         //base case
//         if(index >= nums.size()) {
//             ans.push_back(output);
//             return ;
//         }
        
//         //exclude
//         solve(nums, output, index+1, ans);
        
//         //include
//         int element = nums[index];
//         output.push_back(element);
//         solve(nums, output, index+1, ans);
        
//     }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<vector<int> > ans;
    //     vector<int> output;
    //     int index = 0;
    //     solve(nums, output, index, ans);
    //     return ans;
    // }
        vector<vector<int> > ans;
        vector<int> output;
        int subsets=1<<nums.size();
        for (int num=0;num<subsets;num++){
            for(int i=0;i<nums.size();i++){
                if(num&(1<<i)){
                    output.push_back(nums[i]);
                }
            } 
            ans.push_back(output);
            output={};
        }
        return ans;
    }
        
        
    
};