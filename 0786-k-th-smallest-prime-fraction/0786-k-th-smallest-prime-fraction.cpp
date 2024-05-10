class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // vector <int> ans;
        // for(int i=0;i<arr.size();i++){
        //     for(int j=i+1;j<arr.size();j++){
        //         ans.push_back((double)arr[i]/arr[j]);
        //     }
        // }
        // sort(ans.begin(), ans.end());
        // return 
        vector<float>fraction;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                float frac=static_cast<float>(arr[i]) / static_cast<float>(arr[j]);
                fraction.push_back(frac);
            }
        }
        sort(fraction.begin(),fraction.end());
        float temp=fraction[k-1];
        vector<int> array;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                float frac=static_cast<float>(arr[i])/static_cast<float>(arr[j]);
                if(frac==temp){
                    array.push_back(arr[i]);
                    array.push_back(arr[j]);
                    break;
                }
            }
        }
        return array;

 
        
    }
};