class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int numsSum{0};
        for(int i: nums){
            numsSum+=i;
        }
        return sum-numsSum;
    }
};