class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) return "";
        
        for (int i = 1; i <strs.size(); ++i)
        {
            for (int j = 0; j < strs[0].size(); ++j)
            {
                if (strs[i][j] != strs[0][j])
            }
        }
};

