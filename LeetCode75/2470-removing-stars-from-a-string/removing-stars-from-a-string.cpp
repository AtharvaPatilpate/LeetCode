class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string t = "";

        for (char i : s) {
            if (i != '*') {
                st.push(i);
            }
            else {
                st.pop();
            }
        }

        while (!st.empty()) {
            t.push_back(st.top());
            st.pop();
        }

        reverse(t.begin(), t.end());

        return t;
    }
};