class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // act -> act
        // pots -> opst
        // tops -> opst
        // cat -> act
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
