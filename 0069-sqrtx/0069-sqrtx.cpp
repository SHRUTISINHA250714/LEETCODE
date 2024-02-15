class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        int s = 1, e = x;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            
            if (mid == x / mid) {
                return mid;
            } else if (mid > x / mid) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        
        
    }
        return e;
    }
};