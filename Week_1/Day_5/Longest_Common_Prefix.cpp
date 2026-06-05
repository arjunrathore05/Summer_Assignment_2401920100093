class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        string ans = strs[0];

        for(int i = 1; i < n; i++) {

            string temp = "";

            int len = min(ans.size(), strs[i].size());

            for(int j = 0; j < len; j++) {

                if(ans[j] == strs[i][j]) {
                    temp += ans[j];
                }
                else {
                    break;
                }
            }

            ans = temp;

            if(ans.empty()) {
                return "";
            }
        }

        return ans;
    }
};
