class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {

            // substring length must divide n
            if (n % len != 0) continue;

            string part = s.substr(0, len);
            string temp = "";

            int repeat = n / len;

            for (int i = 0; i < repeat; i++) {
                temp += part;
            }

            if (temp == s) {
                return true;
            }
        }

        return false;
    }
};
