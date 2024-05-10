class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
         vector<float>fraction;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                // float frac=static_cast<float>(arr[i]) / static_cast<float>(arr[j]);
                fraction.push_back(static_cast<float>(arr[i]) / static_cast<float>(arr[j]));
            }
        }
        sort(fraction.begin(),fraction.end());
        float temp=fraction[k-1];
        vector<int> array;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                //float frac=static_cast<float>(arr[i])/static_cast<float>(arr[j]);
                if(static_cast<float>(arr[i])/static_cast<float>(arr[j])==temp){
                    array.push_back(arr[i]);
                    array.push_back(arr[j]);
                    break;
                }
            }
        }
        return array;
        
        //concept of returning pair
        // vector<pair<double, pair<int, int>>> fractions;
        // int n = arr.size();
        // for(int i = 0; i < n - 1; i++) {
        //     for(int j = i + 1; j < n; j++) {
        //         double frac = (double)arr[i] / arr[j];
        //         fractions.push_back({frac, {arr[i], arr[j]}});
        //     }
        // }
        // sort(fractions.begin(), fractions.end());
        // return {fractions[k - 1].second.first, fractions[k - 1].second.second};

 
        
    }
};