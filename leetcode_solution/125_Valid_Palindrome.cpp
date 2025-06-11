class Solution {
public:
    bool func(string& s,int i, int l){
        if(i>=l/2) return true;
        if(s[i] != s[l-i-1]) return false;
        return func(s,i+1,l);
    }
    bool isPalindrome(string s) {
        string filtered;
        for(char c:s){
            if(isalnum(c)) filtered += tolower(c);
        }
        string org=filtered;
        return func(filtered,0,filtered.size());
        // return (org == filtered)? true :false;
    }
};