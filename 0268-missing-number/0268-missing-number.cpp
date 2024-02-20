
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); 
        
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(binary_search(nums.begin(),nums.end(),i)==0)
                return i;
        }
        return nums.size();
        
    }
};
