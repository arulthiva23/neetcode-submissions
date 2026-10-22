class Solution {
public:
    int trap(vector<int>& height) {
        int total_trap = 0;
        int n = height.size();

        vector <int> prefix;
        vector <int> suffix(n);
        int max_height = 0;
        for (int h:height){
            max_height = max(max_height,h);
            prefix.push_back(max_height);
        }

        max_height = 0;
        for (int i=n-1; i>=0; i--){
            max_height = max(max_height,height[i]);
            suffix[i] = max_height;
        }

        for (int j=0; j<n; j++){
            int curr_trap = min(prefix[j],suffix[j])-height[j];
            total_trap += curr_trap;
        }
    return total_trap;

    }
};
