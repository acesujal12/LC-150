class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1 = s1.size();
        unordered_map<char, int> mp1;

        for(int i = 0; i<n1; i++){
            mp1[s1[i]]++;
        }

        int n2 = s2.size();

        if(n1 > n2)
        return false;

        int l = 0;
        int r = n1-1;

        unordered_map<char, int> mp2;

        for(int i = 0; i<n1; i++){
            mp2[s2[i]]++;
        }

        if(mp1==mp2){
            return true;
        }

        while(r<n2){
                r++;
                if(r==n2) break;
                mp2[s2[r]]++;
                mp2[s2[l]]--;
                if(mp2[s2[l]] == 0)
                    mp2.erase(s2[l]);
                if(mp1==mp2){
                    return true;
                }
                l++;
        }
        return false;
        
    }
};
