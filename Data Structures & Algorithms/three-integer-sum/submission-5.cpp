class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        std::vector<vector<int>> result;

        for (int i =0; i< nums.size(); i++){
            if (i ==0){
                int diff = -nums[i];
            }
            else {
                if (nums[i] == nums[i-1]){
                    continue;
                }
            }
            int diff = -nums[i];
            int begin = i+1;
            int end = nums.size()-1;
            while (begin < end){
                if ((nums[begin]+nums[end]) == diff){
                    vector<int> local = {nums[i], nums[begin], nums[end]};
                    result.emplace_back(local);
                    begin++;
                    end--;
                    while (begin < end && nums[begin] == nums[begin - 1]) begin++;
                    while (begin < end && nums[end] == nums[end + 1]) end--;
                }
                else if ((nums[begin]+nums[end]) > diff){
                    end -= 1;
                }
                else{
                    begin +=1;
                }
            }
        }
        return result;
    }
};
