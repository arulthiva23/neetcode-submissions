class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size();i++){
            int dif = target - nums[i] ;
            if (find(nums.begin(),nums.end(),dif)!=nums.end()){
                int j = find(nums.begin(),nums.end(),dif) - nums.begin();
                if (j != i){
                    return {i,j};}
            }
        }
    }
};
