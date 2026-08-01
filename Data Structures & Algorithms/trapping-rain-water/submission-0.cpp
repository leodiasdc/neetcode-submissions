#include <vector>
#include <algorithm>

class Solution {
public:
    int trap(std::vector<int>& height) {
        int begin = 0;
        int end = height.size() - 1;
        int answer = 0;
        int left_height = 0;
        int right_height = 0;

        while (begin <= end) {
            if (height[begin] < height[end]) {
                if (height[begin] >= left_height) {
                    left_height = height[begin];
                } else {
                    answer += left_height - height[begin];
                }
                begin++;
            } else {
                if (height[end] >= right_height) {
                    right_height = height[end];
                } else {
                    answer += right_height - height[end];
                }
                end--;
            }
        }
        return answer;
    }
};