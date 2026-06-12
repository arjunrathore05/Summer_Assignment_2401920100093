class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<int> vis(n, 0);
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;

            vector<string> group;
            string temp1 = strs[i];
            sort(temp1.begin(), temp1.end());

            group.push_back(strs[i]);
            vis[i] = 1;

            for (int j = i + 1; j < n; j++) {
                if (vis[j]) continue;

                string temp2 = strs[j];
                sort(temp2.begin(), temp2.end());

                if (temp1 == temp2) {
                    group.push_back(strs[j]);
                    vis[j] = 1;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};

