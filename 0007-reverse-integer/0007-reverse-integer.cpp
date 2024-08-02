class Solution {
public:
    int reverse(int x) {
       if (x == INT_MAX || x == INT_MIN)
          return 0;
       long long int rev = 0, digit;
       int sign = (x < 0) ? -1 : 1;
       unsigned long long int n = x * sign;
       while (n != 0) {
          digit = n % 10;
          rev = rev * 10 + digit;
          n = n / 10;
       }
       if (rev >= INT_MAX || rev <= INT_MIN)
          return 0;
       return (int)rev * sign;
    }
};