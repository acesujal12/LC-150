class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;

        for(int i = 0; i< s.size(); i++){
            if(stk.empty()){
                if(s[i] == ']' ||s[i] == '}' ||s[i] == ')' ){
                    return false;
                }
            }

            if(s[i] == '[' || s[i] == '{' || s[i] == '(' ){
                stk.push(s[i]);
            }
            if(s[i] == '}'){
                if(stk.top() == '{'){
                    stk.pop();
                }
                else break;
            }

            if(s[i] == ']'){
                if(stk.top() == '['){
                    stk.pop();
                }
                else break;
            }

            if(s[i] == ')'){
                if(stk.top() == '('){
                    stk.pop();
                }
                else break;
            }
        }
        if(stk.size() == 0){
            return true;
        }
        else return false;
    }
};
