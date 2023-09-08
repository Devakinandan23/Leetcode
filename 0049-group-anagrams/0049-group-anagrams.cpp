class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        string t;
        for(auto x: strs)
        {
            t = x;
            sort(t.begin(),t.end());
            map[t].push_back(x);
        }
        vector<vector<string>>anagrams;
        for(auto z: map)
        {
            anagrams.push_back(z.second);
        }
        return anagrams;
    }
};