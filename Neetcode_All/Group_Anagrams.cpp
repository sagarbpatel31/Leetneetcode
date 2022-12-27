class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map <string, vector<string>> store;
        
        for(int i=0;i<strs.size();i++)
        {
            string t=strs[i];
            sort(t.begin(),t.end());
            store[t].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto a:store)
        {
            ans.push_back(a.second);
        }

        return ans;
    }
};