class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        
        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

    
        string rev = clean;
        reverse(rev.begin(), rev.end());

        if (clean == rev) {
            cout << "\"" << s << "\" is palindrome." << endl;
            return true;
        } 
        else {
            cout << "\"" << s << "\" is NOT palindrome." << endl;
            return false;
        }
    }
};
