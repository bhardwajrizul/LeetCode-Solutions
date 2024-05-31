class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int counter = 1;
        for (int i = 1; i < nums.size(); i++) {
            // cout << " i = " << i << " j =  " << j << " counter = " <<  counter  << endl;
            if (nums[i] == nums[i -1] && counter < 2) {
                nums[j] = nums[i];
                j++;
                counter++;
                continue;
            }
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
                counter = 1;
            }
        }
        return j;
    }
};