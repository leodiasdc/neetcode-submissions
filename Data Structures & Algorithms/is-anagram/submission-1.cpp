class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> frequencies1;
        unordered_map<int, int> frequencies2;
        if (t.size() != s.size()) {
            return false;
        }
        for (int i =0; i< t.size(); i++){
            int idx1 = s[i]-'a';
            int idx2 = t[i]- 'a';
            auto it1 = frequencies1.find(idx1);
            auto it2 = frequencies2.find(idx2);
            if (it1 == frequencies1.end()){
                frequencies1[idx1] = 1;
            }
            else {
                frequencies1[idx1] += 1;
            }
            if (it2 == frequencies2.end()){
                frequencies2[idx2] = 1;
            }
            else {
                frequencies2[idx2] += 1;
            }
        }
        for (int i=0; i< 26; i++){
            if (frequencies1[i] != frequencies2[i]){
                return false;
            }
        }
        return true;
    }
};
