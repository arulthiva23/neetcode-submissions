class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stck_indices;

        int max_area =0;

        for (int i=0; i<=heights.size(); i++){
            int current_h = 0;
            if (i<heights.size()){
                current_h = heights[i];
                 }

            while (!stck_indices.empty() && current_h <= heights[stck_indices.top()]){
                int h = heights[stck_indices.top()];
                stck_indices.pop();
                int w=i;
                if (!stck_indices.empty()){
                    w = (i-1) - stck_indices.top();
                }
                max_area = max(max_area,(h*w));
            }
            stck_indices.push(i);
        }   
        return max_area;     
    }
};
