class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0, tmp;
        int left = 0, right = height.size() - 1;
        while(left < right) {
            if(height[left] < height[right]) {
                tmp = (right - left) * height[left];
                if(tmp > max_area) max_area = tmp;
                left++;
            } else {
                tmp = (right - left) * height[right];
                if(tmp > max_area) max_area = tmp;
                right--;
            }
        }
        return max_area;
    }
};