class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        vector<int> cnt1(26, 0), cnt2(26, 0);

       
        for(char ch : s1) {
            cnt1[ch - 'a']++;
        }

        int i = 0;

        for(int j = 0; j < m; j++) {

            cnt2[s2[j] - 'a']++;

            
            if(j - i + 1 > n) {
                cnt2[s2[i] - 'a']--;
                i++;
            }

           
            if(cnt1 == cnt2) {
                return true;
            }
        }

        return false;
    }
};    
