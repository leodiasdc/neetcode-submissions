class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        int begin=0;
        int end = heights.size()-1;
        int answer = 0;
        while (begin < end){
            int min_local = std::min(heights[begin],heights[end]);
            area = min_local * (end-begin);
            if ((begin == 0) && (end == heights.size()-1)){
                answer = area;
            }
            if (area > answer){
                answer = area;
            }
            if (heights[end] < heights[begin]){
                end--;
            }
            else if (heights[begin] < heights[end]){
                begin++;
            }
            else {
                begin++;
                end--;
            }
        }
        return answer;
    }
};
