class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(" \n\r\t") + 1);
        int count = 0;
        int i = s.size() - 1;
    
        if (i < 0)
            return 0;
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }


};