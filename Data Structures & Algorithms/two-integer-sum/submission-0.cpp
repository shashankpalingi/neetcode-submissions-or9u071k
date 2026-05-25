class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // [3,4,5,6] target = 7
        //. 0 1 2 3 
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=0;
                sum=nums[i]+nums[j];
                if(sum==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
