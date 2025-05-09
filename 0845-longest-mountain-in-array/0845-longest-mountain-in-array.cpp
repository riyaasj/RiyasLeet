class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int m = 0;
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i - 1] >= arr[i] || arr[i + 1] >= arr[i]){
                continue;
            }
            int k = i - 2, c = 3;
            while(k >= 0){
                if(arr[k] < arr[k + 1]){
                    c++;
                }
                else{
                    break;
                }
                k--;
            }
            k = i + 2;
            while(k < arr.size()){
                if(arr[k] < arr[k - 1]){
                    c++;
                }
                else{
                    break;
                }
                k++;
            }
            m = max(m, c);
        }
        return m;
    }
};