class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int cnt = 0;
        for(int i = low + 1; i <= high; i++) {
            if(nums[i] <= pivot)
                cnt++;
        }
        int pivotIndex = low + cnt;
        swap(nums[low], nums[pivotIndex]);
        int i = low;
        int j = high;
        while(i < pivotIndex && j > pivotIndex) {
            while(i < pivotIndex && nums[i] <= pivot)
                i++;
            while(j > pivotIndex && nums[j] > pivot)
                j--;
            if(i < pivotIndex && j > pivotIndex) {
                swap(nums[i++], nums[j--]);
            }
        }
        return pivotIndex;
    }
    void quicksort(vector<int>& nums, int low, int high) {
        if(low >= high) return;
        int p = partition(nums, low, high);
        quicksort(nums, low, p - 1);
        quicksort(nums, p + 1, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};