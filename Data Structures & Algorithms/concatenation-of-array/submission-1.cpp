class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // nums = [1,4,1,2]
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<2*n;i++){
            if(i>=n){
                ans[i]=nums[i-n];
            }else{
                ans[i]=nums[i];
            }
            
        }
        return ans;
    }
};