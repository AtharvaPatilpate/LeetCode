class Solution {
public:
    int isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u') ?1:0;
    }

    int maxVowels(string s, int k) {
        int currV = 0;

        for (auto i = 0; i < k; i++) {
            currV += isVowel(s[i]);
        }

        int maxV = currV;

        for (auto i = 1; i <= s.length()-k; i++) {
            currV -= isVowel(s[i-1]);
            currV += isVowel(s[i+k-1]);

            if (currV > maxV) {
                maxV = currV;
            }
        }

        return maxV;
    }
};