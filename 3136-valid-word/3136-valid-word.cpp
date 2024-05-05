class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3)
        return false;
        bool vowelFound = false;
        bool alphaFound=false;
        for (int i = 0; i < word.size(); i++) {
            if (isalpha(word[i])|| isalnum(word[i])) {
                if ((word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U')) {
                    vowelFound = true;
                }
                else if(isdigit(word[i]))
                    continue;
                else{
                    alphaFound = true;
                }
        }else {
            return false;
        }
    }
    
    return (vowelFound && alphaFound);
        
    }
};