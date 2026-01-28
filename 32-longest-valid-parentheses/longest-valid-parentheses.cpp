class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxLength = 0;

        // Left to right
        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right) {
                maxLength = max(maxLength, 2 * right);
            } else if (right > left) {
                left = right = 0; // Reset counters
            }
        }

        left = right = 0;

        // Right to left 
        for (int i = (int)s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right) {
                maxLength = max(maxLength, 2 * left);
            } else if (left > right) {
                left = right = 0; // Reset counters
            }
        }

        return maxLength;
    }
};