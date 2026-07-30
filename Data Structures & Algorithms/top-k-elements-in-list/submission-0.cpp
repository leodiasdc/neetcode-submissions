class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash_map;
        for (int i = 0; i< nums.size(); i++){
            if (hash_map.find(nums[i]) == hash_map.end()){
                hash_map[nums[i]] = 1;
            } 
            else {
                hash_map[nums[i]] += 1;
            }
        }
        vector<int> respostas;
        for (int i =0; i< k; i++){
            int max=-1001;
            int max_ind=0;
            for (int j=0; j<nums.size(); j++){
                if (hash_map[nums[j]] > max){
                    max = hash_map[nums[j]];
                    max_ind = nums[j];
                }
            }
            hash_map.erase(max_ind);
            respostas.emplace_back(max_ind);
        }
        return respostas;
    }
};
