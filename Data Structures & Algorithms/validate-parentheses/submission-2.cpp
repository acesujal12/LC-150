class Solution {
public:
    bool isValid(string s) {
        vector <char> temp;
        int i = 0;
        if(s[i] == ')' || s[i] =='}' || s[i] ==']'){
                return false;
            }

        else{
            while (i < s.length()){
                if(s[i] == '(' || s[i] =='{' || s[i] =='['){
                    temp.push_back(s[i]);
                    i++;
                }

                else if(s[i] == ')' || s[i] =='}' || s[i] ==']'){
                    if (temp.empty() ){
                        return false;
                    }
                    if(temp.back() == '(' && s[i] == ')'){
                        temp.pop_back();
                    }
                    else if(temp.back() == '[' && s[i] ==']'){
                        temp.pop_back();
                    }
                    else if(temp.back() == '{' && s[i] == '}'){
                        temp.pop_back();
                    }

                    else return false;
                    i++;
                }
            }
        }
        return temp.size() == 0;

        // Safety return (won't ever execute, but removes warning)
        return false;
    }
};
