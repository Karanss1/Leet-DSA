class Solution {

public:
    string removeStars(string s) {
        string result = s;
        int index = 0;

        for (char ch : s) {
            if (ch != '*') {
                result[index++] = ch;
            } else {
                
                if (index > 0) {
                    index--;
                }
            }
        }

    
        return result.substr(0, index);
    }
};