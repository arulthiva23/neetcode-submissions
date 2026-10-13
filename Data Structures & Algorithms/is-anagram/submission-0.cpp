class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alpha(26,0);

        if (s.length() != t.length()){
            return false;
        }
        for (int i=0; i<s.length(); i++){
            int index = tolower(static_cast<unsigned char>(s[i])) - static_cast<int>('a');
            alpha[index] += 1;
        }
        for (int i=0; i<t.length(); i++){
            int index = tolower(static_cast<unsigned char>(t[i])) - static_cast<int>('a');
            alpha[index] -= 1;
        }

        for (int x:alpha){
            if (x!=0){
                return false;
            }
        }
        return true;
        

    }
};
