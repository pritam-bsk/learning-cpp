#include <algorithm>
class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> org = nums;
        int n = nums.size();
        std::sort(nums.begin(),nums.end());
        vector<int> temp(n,0);
        for(int x=0;x<n;x++){
            for(int i=0;i<n;i++){
                temp[i]=nums[(i+x)%nums.size()];
            }
            if(temp == org) return true;
        }
        return false;
    }
};