class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        result[0] = findFirst(nums, target);
        result[1] = findLast(nums, target);
        return result;
    }
    int findFirst(const vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int first = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                first = mid;
                e = mid - 1; 
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return first;
    }

    int findLast(const vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int last = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                last = mid;
                s = mid + 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return last;
    }
};