class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int count = 0;
        for (int i = 0; i < n; ++i) {
        //     if ((colors[i] == 1 && colors[(i + 1) % n] == 0 && colors[(i + 2) % n] == 1) ||
        //     (colors[i] == 0 && colors[(i + 1) % n] == 1 && colors[(i + 2) % n] == 0)) {
        //     count++;
        // }
            if( colors[(i + 1) % n] != colors[i] && colors[(i + 2) % n] ==colors[i] ){
                count++;
            }
    }

    return count;

        
        
    }
};