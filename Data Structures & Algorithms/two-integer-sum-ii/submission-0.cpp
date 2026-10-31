class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index ;

        for (int i=0; i<numbers.size();i++){
            int index1=i+1;
            int diff = target - index1;

            auto it = find(numbers.begin()+i,numbers.end(),diff);

            if (it != numbers.end()){
                int index2 = it-numbers.begin() +1;
                index.push_back(index1);
                index.push_back(index2);
            }
        }
        return index;
    }
};
