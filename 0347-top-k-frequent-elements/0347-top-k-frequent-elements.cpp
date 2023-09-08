class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(auto x:nums) map[x]++;
        vector<vector<int>>bucket(nums.size() + 1);
        for(auto z:map)
        {
            bucket[z.second].push_back(z.first);
        }
        vector<int>ans;
        for(int i = bucket.size()-1; i >=0; i--)
        {
            for(auto x:bucket[i])
            {
                ans.push_back(x);
            }
            if(ans.size() == k)
            {
                return ans;
            }
        }
        return ans;
    }
};