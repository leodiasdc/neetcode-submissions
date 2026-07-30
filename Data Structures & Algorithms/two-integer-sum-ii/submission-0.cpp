class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size()-1;
        while (begin < end){
            if ((numbers[begin]+numbers[end]) == target){
                return {begin+1 ,end+1};
            }
            if ((numbers[begin]+numbers[end])> target){
                end -= 1;
            }
            else{
                begin +=1;
            }
        }
    }
};
