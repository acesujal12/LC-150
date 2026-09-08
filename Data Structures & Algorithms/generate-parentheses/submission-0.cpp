class Solution {
public:
    void fun(int n, vector<string>& ans, string& curr, int openCount, int closeCount){
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return;
        }
        if(openCount<n){
            curr.push_back('(');
            fun(n, ans, curr, openCount+1, closeCount);
            curr.pop_back();
        }
        if(openCount> closeCount){
            curr.push_back(')');
            fun(n, ans, curr, openCount, closeCount+1);
            curr.pop_back();
        }

        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;

        fun(n, ans, curr, 0, 0);

        return ans;
    }
};