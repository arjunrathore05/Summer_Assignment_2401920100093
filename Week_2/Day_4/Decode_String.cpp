class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> strStack;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                countStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int k = countStack.top();
                countStack.pop();

                string prev = strStack.top();
                strStack.pop();

                string temp = prev;
                while (k--) {
                    temp += curr;
                }
                curr = temp;
            }
            else { // letter
                curr += ch;
            }
        }

        return curr;
    }
};
