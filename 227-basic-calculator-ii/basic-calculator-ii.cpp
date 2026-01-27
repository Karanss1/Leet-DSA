class Solution {
public:
    int calculate(string s) {
        long result = 0, lastNum = 0, num = 0;
        char op = '+';

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {
                if (op == '+') {
                    result += lastNum;
                    lastNum = num;
                } 
                else if (op == '-') {
                    result += lastNum;
                    lastNum = -num;
                } 
                else if (op == '*') {
                    lastNum = lastNum * num;
                } 
                else if (op == '/') {
                    lastNum = lastNum / num;
                }

                op = s[i];
                num = 0;
            }
        }

        result += lastNum;
        return result;
    }
};
