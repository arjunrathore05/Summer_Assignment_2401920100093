class Solution {
public:
    string reverseWords(string s) {
        string sentence = "";
        string word = "";

        for(char ch : s) {
            if(ch != ' ') {
                word += ch;
            }
            else {
                reverse(word.begin(), word.end());
                sentence += word + " ";
                word = "";
            }
        }

        reverse(word.begin(), word.end());
        sentence += word;

        return sentence;
    }
};
