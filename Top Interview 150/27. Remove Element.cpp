class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        int count = 0;
        int temp = INT_MIN;
        int last = nums.size() - 1;
        while(i < nums.size()) {
            if (nums[i] == val) {
                count++;
            }
            i++;
        }
        while(j < nums.size() - count) {
            if (nums[j] == val) {
                temp = nums[last];
                nums[last] = val;
                nums[j] = temp;
                last--;
                continue;
            }
            j++;
        }
        return nums.size() - count;
    }
};