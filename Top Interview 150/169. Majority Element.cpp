class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> el_freq;
        int freq = INT_MIN;
        int max = INT_MIN;
        for(int el : nums) {
            el_freq[el]++;
        }
        for(const auto& pair : el_freq) {
            if(pair.second > freq) {
                freq = pair.second;
                max = pair.first;
            }

        }
        return max;
    }
};