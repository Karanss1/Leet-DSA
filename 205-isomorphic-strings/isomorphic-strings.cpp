class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) 
            return false;

        unordered_map<char,char> ST, TS;

        for (size_t i = 0; i < s.size(); ++i) {
            char cs = s[i], ct = t[i];

            //  s -> t
            if (ST.count(cs)) {
                if (ST[cs] != ct) return false;
            } else {
                ST[cs] = ct;
            }

            //  t -> s
            if (TS.count(ct)) {
                if (TS[ct] != cs) return false;
            } else {
                TS[ct] = cs;
            }
        }
        return true;
    }
};