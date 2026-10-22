class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_water = min(heights[left],heights[right]) * (right-left);

        while (left<right){
            int curr_width = (right-left);
            int curr_height = min(heights[left],heights[right]);
            max_water = max(max_water, curr_width*curr_height);

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
