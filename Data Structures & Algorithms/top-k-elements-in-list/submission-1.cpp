class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequency;
        for (int x : nums){
            frequency[x]++;
        }

        int n= nums.size();
        vector<int> buckets(n+1,0);
        for(auto& [num,freq]: frequency){
            buckets[freq] = num;
        }
        vector<int> result;
        for (int i = buckets.size()-1 ; i>=0;i--){
            if (buckets[i]!=0){
                result.push_back(buckets[i]);
            }
            if (result.size()==k){
                break;
            }
        }
        return result;

    }
};
