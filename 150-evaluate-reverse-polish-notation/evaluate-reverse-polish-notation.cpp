class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto &t : tokens) {
            if (t.size() == 1 && (t[0] == '+' || t[0] == '-' || t[0] == '*' || t[0] == '/')) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                switch (t[0]) {
                    case '+': st.push(a + b); break;
                    case '-': st.push(a - b); break;
                    case '*': st.push(a * b); break;
                    case '/': st.push(a / b); break;
                }
            } else {
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};
