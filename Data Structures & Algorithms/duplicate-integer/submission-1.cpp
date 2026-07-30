class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash_map;
        for (int i=0; i< nums.size(); i++){
            auto it = hash_map.find(nums[i]);
            if (it != hash_map.end()){
                return true;
            }
            else {
                hash_map[nums[i]] = 0;
            }
        }
        return false;
    }
};