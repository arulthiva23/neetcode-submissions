class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagramGroups;
        for (string& originalstr:strs){
            string sorted_str = originalstr;
            sort(sorted_str.begin(),sorted_str.end());

            anagramGroups[sorted_str].push_back(originalstr);
        }

        vector<vector<string>> result;
        for(auto& [key,group] : anagramGroups){
            result.push_back(group);
        }
        return result;
    }
};


