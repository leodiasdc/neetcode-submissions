class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> hash_map;
       for (int i =0; i< nums.size(); i++){
            hash_map[nums[i]] = i;
       } 
       for (int i =0; i< nums.size(); i++){
            int diff = target-nums[i];
            auto it = hash_map.find(diff);
            if (it != hash_map.end() && ((it->second != i))){
                vector<int> resposta;
                resposta.push_back(it->second);
                resposta.push_back(i);
                sort(resposta.begin(), resposta.end());
                return resposta;
            }
       }
    }
};
