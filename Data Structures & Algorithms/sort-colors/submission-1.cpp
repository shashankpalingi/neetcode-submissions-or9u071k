class Solution {
public:
    void sortColors(vector<int>& nums) {
        // nums = [2,0,2,1,1,0,1,0,1,0]
        int low=0;
        int mid=0;
        int end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
        
        
    }
};