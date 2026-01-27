class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {  // why?
            if (isOperator(token)) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int result = 0;

                if (token == "+") {
                    result = a + b;
                } else if (token == "-") {
                    result = a - b;
                } else if (token == "*") {
                    result = a * b;
                } else if (token == "/") {
                    result = a / b; // assume b is not zero
                }

                st.push(result);
            } else {
                // convert token to integer and push to stack
                st.push(stoi(token));
            }
        }

        // final result is the last item in the stack
        int ans = st.top();
        st.pop();
        return ans;
    }

private:
    bool isOperator(const string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }
};