class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
            c = tolower(c);
        }

        s.erase(remove_if(s.begin(),s.end(),[](char c){
            return !isalnum(c);
        }),s.end());
        

        int n = s.length();
        
        int left = 0;
        int right = n-1;

        while (left<right){
            if (s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};
