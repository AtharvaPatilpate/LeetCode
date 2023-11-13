class Solution {
public:
    int isVowel(char ch)
    {
        string str = "aeiouAEIOU";
        return (str.find(ch) != string::npos);
    }

    string sortVowels(string s) {
        vector<char> vowels;
        int n = s.length();

        for (char c : s) {
            if (string("aeiouAEIOU").find(c) != string::npos) {
                vowels.push_back(c);
            }
        }

        sort(vowels.begin(), vowels.end(), greater<char>());

        string res;

        for (char c : s) {
            if (string("aeiouAEIOU").find(c) != string::npos) {
                res += vowels.back();
                vowels.pop_back();
            }
            else {
                res += c;
            }
        }

        return res;
    }
};