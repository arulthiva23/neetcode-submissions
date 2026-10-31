class Solution {
public:
    int maxArea(vector<int>& heights) {
        left = 0;
        right = heights.size() - 1;
        int max_water = min(height[left],height[right]) * (right-left);

        while (left<right){
            max_water = max(max_water, min(height[left],height[right]) * (right-left));

            if (height[left]<height[right]){
                left++;
            }
            else{
                right++;
            }
        }
        return max_water;
    }
};
