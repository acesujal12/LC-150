class Solution {
public:
    void combination(vector<string>& ans, string& curr, int idx, string digits, vector<string> hash){
        if(curr.size() == digits.size()){
            ans.push_back(curr);
            return;
        }
        int digit = digits[idx] - '0';
        string value = hash[digit];

        for(int i = 0; i<value.size(); i++){
            curr.push_back(value[i]);
            combination(ans, curr, idx+1, digits, hash);
            curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(!digits.size()) return ans;
        string current;
        vector<string> hsh{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        combination(ans, current, 0, digits, hsh);

        return ans;
    }
};
