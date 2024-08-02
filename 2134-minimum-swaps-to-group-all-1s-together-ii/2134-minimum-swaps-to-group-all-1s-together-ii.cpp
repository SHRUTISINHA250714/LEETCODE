class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int n = nums.size();
        int totalOnes = 0;
        
        
        for (int num : nums) {
            if (num == 1) {
                totalOnes++;
            }
        }
        
        if (totalOnes == 0) return 0;  
        
        
        int maxOnes = 0, currentOnes = 0;
        
        
        for (int i = 0; i < totalOnes; ++i) {
            if (nums[i] == 1) {
                currentOnes++;
            }
        }
        maxOnes = currentOnes;
        
        
        for (int i = 1; i < n; ++i) {
            currentOnes -= nums[i - 1];  
            currentOnes += nums[(i + totalOnes - 1) % n];  
            
            maxOnes = max(maxOnes, currentOnes);
        }
        
        return totalOnes - maxOnes;  
    }
    
};