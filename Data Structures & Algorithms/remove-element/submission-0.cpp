class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Input: nums = [3,2,2,3], val = 3
        // Output: k = 2, nums = [2,2,_,_]
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                cnt++;
            }
        }
        
        int starting=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                starting=i;
                break;
            }
        }
        // [0,1,2,2,3,0,4,2]
        //.     s
        for(int i=starting+1;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[i],nums[starting]);
                starting++;
            }
        }
        return cnt;
    }
};