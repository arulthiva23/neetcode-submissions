class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str ="";
        for (const string& str: strs){
            int n = str.length();
            encoded_str += to_string(n) + "#"+ str;
        }
        return encoded_str;

    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> result;
        while (i<s.length()){
            int length = s[i] - '0';
            string res_str = s.substr(i+2,length);
            result.push_back(res_str);
            i = (i+2) + length;
        }
        return result;
    }
};
