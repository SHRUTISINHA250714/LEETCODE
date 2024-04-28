class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //TLE
        // vector<std::pair<int, int>> ans;
        // for(int i=0;i<nums.size();i++){
        //     int count1=count(nums.begin(), nums.end(), nums[i]);
        //     ans.push_back(make_pair(count1, nums[i]));
        // }
        // auto maxElement =max_element(ans.begin(), ans.end());
        // return maxElement->second;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
        
        
                          
            
        
    }
};