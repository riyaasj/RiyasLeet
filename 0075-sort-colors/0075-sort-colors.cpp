class Solution {
private:
    void quickSort(vector<int> &nums, int low, int high){
        if(low < high){
            int pivot = partition(nums, low, high);
            quickSort(nums, low, pivot - 1);
            quickSort(nums, pivot + 1, high);
        }
    }
    int partition(vector<int> &nums, int low, int high){
        int pivot = nums[high];
        int i = low - 1;
        for(int j = low; j <= high - 1; j++){
            if(nums[j] < pivot){
                swap(nums[++i], nums[j]);
            }
        }
        swap(nums[++i], nums[high]);
        return i;
    }
public:
    void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
    }
};