class Solution {
public:
    bool isVowel (char c) {
        return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u';
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        char t;
        
        while (i < j) {
            
            if (isVowel(s[i])) {
               if (isVowel(s[j])) {
                    t = s[i];
                    s[i] = s[j];
                    s[j] = t;

                    i++;
                    j--;
                }

                else {
                    j--;
                }
            }
            
            else {
                i++;
            }
        }

        return s;
    }
};