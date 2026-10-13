class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index_map;

        for (int i=0; i<nums.size();i++){
            int dif = target - nums[i] ;
            if (index_map.contains(dif)){
                return {index_map[dif],i};
            }
            index_map[nums[i]]=i;
        }
        return {};
    }
};
