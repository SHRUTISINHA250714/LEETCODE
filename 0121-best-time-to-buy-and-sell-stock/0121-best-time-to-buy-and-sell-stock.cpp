class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tempmin=prices[0];
        int maxprof=0;
        for(int i=1;i<prices.size();i++){
            tempmin=min(tempmin,prices[i]);
            int tempprof=prices[i]-tempmin;
            maxprof=max(maxprof,tempprof);
        }
        return maxprof;
    }
    
        
        
};