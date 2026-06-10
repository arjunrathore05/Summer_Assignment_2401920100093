class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length();
        int n2 = needle.length();

        if (n2 == 0) return 0;

        int j = 0;
        for (int i = 0; i < n1; i++) {
            if (haystack[i] == needle[j]) {
                int start = i;   
                j = 0;
                while (i < n1 && j < n2 && haystack[i] == needle[j])
                 {
                    i++;
                    j++;
                }
                 if (j == n2) {
                 return start;
                }
                 i = start; 
                j = 0;
             }
           }
        return -1;
    }
};

