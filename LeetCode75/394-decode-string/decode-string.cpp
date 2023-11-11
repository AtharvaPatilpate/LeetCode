class Solution {
public:

    string decodeString(string s) {
        stack<pair<int, string>> st;
        string ans = "";
        int i = 0;

        while(i < s.length()) {
            if(s[i] - '0' <= 9 && s[i] - '0' >= 0) {
                int num_begin = i;

                while(s[i] - '0' <= 9 && s[i] - '0' >= 0) {
                    i++;
                }

                int number = stoi(s.substr(num_begin, i-num_begin));

                st.push({number, ""});

                continue;
            }

            if(s[i] - 'a' >= 0 && s[i] - 'a' <= 26) {
                int str_begin = i;

                while(s[i] - 'a' >= 0 && s[i] - 'a' <= 26) {
                    i++;
                }

                string curr_string = s.substr(str_begin, i-str_begin);
                
                if(!st.empty()) {
                    st.top().second += curr_string;
                }

                else {
                    ans += curr_string;
                }
                continue;
            }

            if(s[i] == ']') {
                pair<int, string> temp = st.top();
                st.pop();
                string new_string;

                while(temp.first--) {
                    new_string += temp.second;
                }
                   
                if(st.empty()) {
                    ans += new_string;
                }
                
                else {
                    st.top().second += new_string;
                }

                i++;
            }
            else {
                i++;
            }
        }
        
        return ans;
    }
};