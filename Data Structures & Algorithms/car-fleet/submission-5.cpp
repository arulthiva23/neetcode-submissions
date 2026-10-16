class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float> time;
        int n = position.size();
        vector<pair<int, int>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }

         sort(cars.begin(), cars.end(), [](const pair<int,int>& a, const    pair<int,int>& b) {
            return a.first > b.first;
        });

        for(int i=0; i<n;i++){
            float time_i = float (target - cars[i].first) / cars[i].second;
            if (time.empty() || time.top()<time_i){
                time.push(time_i);
            }

        }
        return time.size();
    }
};
