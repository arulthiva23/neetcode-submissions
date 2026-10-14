class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        int longest_seq=0;

        for (int n:numset){
            if (numset.find(n-1) == numset.end()){
                int length =1;
                while (numset.find(length+n) != numset.end()){
                    length++;
                }
            longest_seq = max(longest_seq,length);
            }
        }
        return longest_seq;
    }
};
