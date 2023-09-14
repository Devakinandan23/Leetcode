class Solution {
public:
    bool rotateString(string s, string goal) {
        string c = s + s;
        bool t;
        // cout<<c<<endl;
        // cout<<goal<<endl;
        if(s.size() != goal.size())
        {
            return false;
        }
        if(c.find(goal) != std::string::npos)
        {
            return true;
        }
        return false;
    }
};


// if (str.find(str2) != std::string::npos) {
// //.. found.
// } 