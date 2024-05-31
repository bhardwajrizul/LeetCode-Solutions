class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotatedNums(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            rotatedNums[(i + k) % nums.size()] = nums[i];
        }
        nums = rotatedNums;
    }
};