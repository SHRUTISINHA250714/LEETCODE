class Solution {
public:
    int trailingZeroes(int n) {
//         long long int p=1;
//         for(int i=1;i<=n;i++){
//             p = (p * i);
            
//         }
        
//         int c=0;
//         while(p%10==0){
//             c++;
//             p = (p/10);
//         }
//         return c;
    int count = 0;
    for (int i = 5; n / i > 0; i *= 5) {
        count += n / i;
    }
    return count;
        
    }
};