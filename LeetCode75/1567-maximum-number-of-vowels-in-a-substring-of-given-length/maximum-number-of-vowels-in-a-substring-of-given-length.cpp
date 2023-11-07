class Solution {
public:
    int isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u');
    }

    int maxVowels(string s, int k) {\
        int currV = 0;

        for (auto i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                currV++;
            }
        }

        int maxV = currV;

        for (auto i = k; i < s.length(); i++) {
            if (isVowel(s[i-k])) {
                currV--;
            }
            if (isVowel(s[i])) {
                currV++;
            }

            maxV = max(maxV, currV);
        }

        return maxV;
    }
};