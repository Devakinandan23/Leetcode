class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        string s;
        int n, sum,count = 0;
        for(int i = low; i <= high; i++)
        {
            s = to_string(i);
            n = s.size(),sum = 0;
            for(int j = 0; j < n/2; j++) sum += s[j] - s[n-j-1];
            if(n%2 == 0 && sum == 0) count++;
        }
        return count;
    }
};