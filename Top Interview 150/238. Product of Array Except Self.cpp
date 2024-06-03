class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int sum = 0;
        bool hasZero = false;
        int zeroCount = 0;
        vector<int> res(nums.size(), 0);
        for (int num: nums) {
            if (num == 0) {
                hasZero = true;
                zeroCount++;
            }
            if (num != 0) {
                product *= num;
                sum += (num < 0) ? num * -1 : num; 
            } 
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0 && !hasZero) {
                res[i] = product / nums[i];
            } else if(nums[i] == 0 && zeroCount <= 1) {
                res[i] = (sum == 0) ? 0 : product;
            }
        }
        return res;
        // Better Approach would be to use the algorithm where we mantain two arrays
        // one from left to right and one from right to left with the product of all elements
        // and then multiply the two arrays to get the result
    }
};