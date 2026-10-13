class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> dup_list;
        for (int i=0; i<nums.size();i++){
            if (find(dup_list.begin(),dup_list.end(),nums[i])!=dup_list.end()){
                return true;
            }
            else{
                dup_list.push_back(nums[i]);
            }
        }
        return false;
    }
};