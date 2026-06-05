class Solution {
public:
    string newstring(string s){
        int n=s.length();
        string op="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                op.push_back(tolower(s[i]));
            }
        }
        return op;

    }
    bool isPalindrome(string s) {
       string ns=newstring(s); 
       int n=ns.length();
       int i=0;
       int j=n-1;
       while(i<=j){
        if(ns[i]!=ns[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
       }
       return true;
    }
};
