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
            int hash_pos = s.find('#',i);

            int length = stoi(s.substr(i,hash_pos-i));

            string res_str = s.substr(hash_pos+1,length);
            result.push_back(res_str);

            i = hash_pos+1+length;
        }
        return result;
    }
};
