class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size(), i = 0, j = 0, idx = 0;

        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            j = i;
            while (j < n && s[j] != ' ') j++;
            if (i < j) {
                if (idx) s[idx++] = ' ';
                reverse(s.begin() + i, s.begin() + j);
                for (int k = i; k < j; k++) s[idx++] = s[k];
                i = j;
            }
        }
        s.resize(idx);
        return s;
    }
};
