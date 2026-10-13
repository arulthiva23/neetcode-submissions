class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequency;
        for (int x : nums){
            frequency[x]++;
        }

        int n= nums.size();
        vector<vector<int>> buckets(n+1);
        for(auto& [num,freq]: frequency){
            buckets[freq].push_back(num);
        }
        vector<int> result;
        for (int i = buckets.size()-1 ; i>=0;i--){
            for(int num : buckets[i]){
                result.push_back(num);
            }
            if (result.size()==k){
                break;
            }
        }
        return result;

    }
};
