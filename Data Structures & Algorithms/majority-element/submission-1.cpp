class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=0;
        int ans=nums[0];
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>max){
                max=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};