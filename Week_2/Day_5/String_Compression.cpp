class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> res;
        int n = chars.size();

        int i = 0;
        while (i < n) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            res.push_back(ch);

            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    res.push_back(c);
                }
            }
        }

        chars = res;
        return res.size();
    }
};    
