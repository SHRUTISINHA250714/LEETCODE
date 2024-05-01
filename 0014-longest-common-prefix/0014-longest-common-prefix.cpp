class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        int minLen=INT_MAX;
        for(int i=0;i<n;i++)
        {
            minLen=min(minLen,(int)strs[i].size());
        }
        string prefix="";
        for(int i=0;i<minLen;i++)
        {
            char c=strs[0][i];
            for( int j=1;j<n;j++){
                if(strs[j][i]!=c)
                    return prefix;
            }
            prefix+=c;
        }
        return prefix;
        
    }
};