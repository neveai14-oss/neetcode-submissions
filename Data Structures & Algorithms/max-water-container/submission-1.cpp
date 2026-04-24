class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n - 1;

        int maximum = 0;

        while (left < right) {
            int water = (right - left) * min(heights[left], heights[right]);

            maximum = max(maximum, water);

            if (heights[left] < heights[right]) {
                left++;
            } else if (heights[left] > heights[right]) {
                right--;
            } else {
                left++;
                right--;
            }
        }

        return maximum;
    }
};
