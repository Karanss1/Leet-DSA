class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<string> st;
        for (int i = 0; i < arr1.size(); i++) {
            string s = to_string(arr1[i]);
            string p = "";
            for (int j = 0; j < s.size(); j++) {
                p += s[j];
                st.insert(p);
            }
        }

        int ans = 0;
        for (int i = 0; i < arr2.size(); i++) {
            string s = to_string(arr2[i]);
            string p = "";
            for (int j = 0; j < s.size(); j++) {
                p += s[j];
                if (st.count(p)) ans = max(ans, j + 1);
            }
        }
        return ans;
    }
};
