class Solution {
public:
    bool isPalindrome(string s) {
        for (int i=0; i< s.size(); i++){
            if (!std::isalnum(s[i])){
                s.erase(i,1);
                i--;
            }
        }
        int begin = 0;
        int end = s.size()-1;
        while (begin < end){
            if (std::tolower(s[begin]) != std::tolower(s[end])){
                return false;
            }
            begin +=1;
            end -=1;
        }
        return true;
    }
};
