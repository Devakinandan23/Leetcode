class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0;
        int lastcount = 0;
        int concount = 1;
        for(int i = 1; i < s.size();i++)
        {
            if(s[i] != s[i-1])
            {
                lastcount = concount;
                concount = 1;
                count++;
            }
            else
            {
                concount++;
                if(lastcount >= concount) count++;
            }
        }
        return count;
    }
};