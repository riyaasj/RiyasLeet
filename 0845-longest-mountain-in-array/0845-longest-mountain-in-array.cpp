class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int m = 0;
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i - 1] < arr[i] && arr[i + 1] < arr[i]){
                int k = i - 2, c = 3;
                while(k >= 0 && arr[k] < arr[k + 1]){
                    c++;
                    k--;
                }
                k = i + 2;
                while(k < arr.size() && arr[k] < arr[k - 1]){
                    c++;
                    k++;
                }
                m = max(m, c);
            }
        }
        return m;
    }
};