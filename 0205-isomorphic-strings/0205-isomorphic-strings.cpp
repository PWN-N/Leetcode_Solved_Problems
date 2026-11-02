class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() !=t.size()) return false;
        map<char, char> m1, m2;
        
        int n = s.size();
        
        for (int i =0; i<n; i++){
            if (m1.find(s[i]) == m1.end())
                m1[s[i]] = t[i];
            else if (m1[s[i]] != t[i])
                return false;
                
            if (m2.find(t[i]) == m2.end())
                m2[t[i]] = s[i];
            else if (m2[t[i]] != s[i])
                return false;
        }
        return true;
    }
};