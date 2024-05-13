class Solution {
public:
    string trim(const string& str) {
    string result;
    bool inSpace = false;

    for (char c : str) {
        if (isspace(c)) {
            if (!inSpace) {
                result += ' ';
                inSpace = true;
            }
        } else {
            result += c;
            inSpace = false;
        }
    }

    size_t start = result.find_first_not_of(" ");
    if (start == string::npos)
        return "";
    
    size_t end = result.find_last_not_of(" ");
    
    return result.substr(start, end - start + 1);
}

    string reverseWords(string s) {
        string s1=trim(s);
        int n=s1.size();
        int j=n-1;
        vector<char> ch;
        string result;
        
        for(int i=n-1;i>=0;i--)
        {
            while(j >= 0 && s1[j] != ' ')
            {
                
                char c = s1[j];
                ch.push_back(c);
                j--;
            }
            reverse(ch.begin(), ch.end());
            result += string(ch.begin(), ch.end());
            if(j>=0){
                result+=' ';
                j--;
            }
            ch.clear();
        
        }
        return result;
        
        
        
        
    }
};