class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> sortedArr(m + n);
        int i = 0, j = 0, k = 0;
        
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                sortedArr[k++] = nums1[i++];
            } else {
                sortedArr[k++] = nums2[j++];
            }
        }
        
        while (i < m) {
            sortedArr[k++] = nums1[i++];
        }
        
        while (j < n) {
            sortedArr[k++] = nums2[j++];
        }
        
        for (int l = 0; l < m + n; l++) {
            nums1[l] = sortedArr[l];
        }
    }
};