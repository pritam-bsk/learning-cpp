#include<climits>
class Solution {
public:
    bool isPalindrome(int x) {
        int rev{};
        int org = x;
        while(x>0){
            int last = x%10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
            rev = rev*10 + last;
            x /= 10;
        }
        return (rev==org) ? true : false;
    }
};