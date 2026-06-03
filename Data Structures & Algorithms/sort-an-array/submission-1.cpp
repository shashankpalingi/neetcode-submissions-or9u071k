class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // nums = [10,9,1,1,1,2,3,1]
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[mini]){
                    mini=j;
                }
            }
            swap(nums[i],nums[mini]);
        }
        return nums;
    }
};