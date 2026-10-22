class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_water = min(heights[left],heights[right]) * (right-left);

        while (left<right){
            max_water = max(max_water, min(heights[left],heights[right]) * (right-left));

            if (heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
};
