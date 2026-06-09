class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if(k > n) return ans;

        vector<int> freqP(26, 0);
        vector<int> window(26, 0);

        for(char ch : p) {
            freqP[ch - 'a']++;
        }

        int i = 0;

        for(int j = 0; j < n; j++) {

           
            window[s[j] - 'a']++;

            
            if(j - i + 1 > k) {
                window[s[i] - 'a']--;
                i++;
            }

          
            if(window == freqP) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
