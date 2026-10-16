class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> indices;
        vector<int> results(n,0);

        for (int i=0; i<n;i++ ){
            while (!indices.empty() && temperatures[indices.top()]<temperatures[i]){
                
                int prev_day = indices.top();
                indices.pop();
                results[prev_day]= i - prev_day; 
                
            }
            indices.push(i);
        } 
        return results;   
    }
};
