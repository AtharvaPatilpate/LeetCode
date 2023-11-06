class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int count = 1;
        int n = chars.size();
        chars.push_back('*');
        

        for (int i = 0; i < n; i++) {
            char curr = chars[i];

            if (chars[i+1] == curr) {
                count++;
            }
            else {
                s += curr;

                if (count > 1) {
                    s += to_string(count);
                    count = 1;
                }
            }
        }

        for (int i = 0; i < s.length(); i++) {
            chars[i] = s[i];
        }

        return s.length();
    }
};