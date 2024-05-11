class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_gas = 0;
    int total_cost = 0;
    int tank = 0;
    int istart = 0;

    for (int i = 0; i < gas.size(); ++i) {
        total_gas += gas[i];
        total_cost += cost[i];
        tank += gas[i] - cost[i];
        if (tank < 0) {
            istart = i + 1;
            tank = 0;
        }
    }

    if (total_gas < total_cost)
        return -1;
    else
        return istart;
        
        
    }
};