#include<climits>
class Solution {
public:
    int reverse(int x) {
        int rev_num{};
        while(x!=0){
            int last = x%10;
            if(rev_num > (INT_MAX/10)|| rev_num<(INT_MIN/10)) return 0;
            rev_num = rev_num*10+last;
            x=x/10;
        }
        return rev_num;
    }
};