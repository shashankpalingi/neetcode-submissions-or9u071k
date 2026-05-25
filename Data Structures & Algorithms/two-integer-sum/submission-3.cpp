class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // nums = [4,5,6], target = 10
        //         0 1 2
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                return {mp[rem],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
