class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if (s.empty() || s.length() == 1) {
            return s.length();
        }
        int res = 0;
        int begin = 0;
        int end = 0; 
        
        std::vector<bool> vis(256, false);
        
        while (end < s.length()) {
            while (vis[s[end]] == true) {
                vis[s[begin]] = false;
                begin++;
            }          
            vis[s[end]] = true;
            res = std::max(res, (end - begin + 1));
            end++;
        }
        return res;
    }
};