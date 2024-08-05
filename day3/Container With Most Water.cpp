#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int area = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            area = std::max(area, (right - left) * std::min(height[left], height[right]));

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return area;
    }
};
