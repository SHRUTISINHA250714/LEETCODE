class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> frequency;
        vector<int> ans;
        for(int element : nums) {
            frequency[element]++;
        }
        for(const auto& pair : frequency) {
            if(pair.second==1)
                ans.push_back(pair.first);
        }
        return ans;
    }
};