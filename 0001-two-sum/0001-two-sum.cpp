class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int sum = 0;
        unordered_map <int,int> map;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(map.find(tar-nums[i]) == map.end())
            {
                map[nums[i]] = i;
            }
            else
                return {map[tar-nums[i]],i};
        }
        return {};
    }
};