class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        if (s.length()==1) return false;
        for (char ch :s){
            if (ch=='(' or ch=='{' or ch=='['){
                brackets.push(ch);
            }

            else if (ch==')'){
                if (brackets.empty() or brackets.top()!='('){
                    return false;
                }
                brackets.pop();
            }
            else if (ch==']'){
                if (brackets.empty() or brackets.top()!='['){
                    return false;
                }
                brackets.pop();
            }
            else if (ch=='}'){
                if (brackets.empty() or brackets.top()!='{'){
                    return false;
                }
                brackets.pop();
            }
        }
    return brackets.empty();;

    }
};
