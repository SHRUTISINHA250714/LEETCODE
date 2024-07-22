class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        while(start!=0 || goal!=0){
            int bit=start&1;
            int bit1=goal&1;
            if(bit!=bit1)
                count++;
            start=start>>1;
            goal=goal>>1;
        
        }
        return count;
        
    }
};