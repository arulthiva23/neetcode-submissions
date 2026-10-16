class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (const auto& tkn : tokens){
            if (tkn == "+" || tkn == "-"|| tkn == "*" || tkn == "/"){
                int x = nums.top();
                nums.pop();
                int y = nums.top();
                nums.pop();
                int result =0;
                switch (tkn[0]){
                    case '+':
                        result = x+y;
                        break;
                    case '-':
                        result = y-x;
                        break;
                    case '*':
                        result = x*y;
                        break;
                    case '/':
                        result = y/x;
                        break;    
                }
                nums.push(result);
            }
            else{
                int n = stoi(tkn);
                nums.push(n);
            }
        }
        return nums.top();
    }
};
