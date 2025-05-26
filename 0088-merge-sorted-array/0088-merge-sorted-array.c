void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int j = 0;
    for(int i = 0; i < n; i++){
        while(*(nums1 + j) < *(nums2 + i) && j < m){
            j++;
        }
        for(int k = m; k > j; k--){
            *(nums1 + k) = *(nums1 + k - 1);
        }
        *(nums1 + j) = *(nums2 + i);
        m++;
    }
    return;
}