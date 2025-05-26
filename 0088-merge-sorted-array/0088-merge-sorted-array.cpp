class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m - 1, n1 = m - 1, n2 = n - 1;
        for(n2; n2 >= 0; n2--){ 
            while(n1 > 0 && nums1[n1] > nums2[n2]){
                n1--;
            }
            for(int i = last; i >= n1 + 1; i--){
                nums1[i + 1] = nums1[i];
            }
            nums1[n1 + 1] = nums2[n2];
            last++;
        }
    }
};