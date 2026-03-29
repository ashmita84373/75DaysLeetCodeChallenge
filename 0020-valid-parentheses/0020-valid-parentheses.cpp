#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // If opening bracket → push
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // If stack empty → invalid
                if (st.empty()) return false;

                char top = st.top();

                // Check matching
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        // If stack empty → valid
        return st.empty();
    }
};