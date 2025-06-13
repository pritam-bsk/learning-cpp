class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCons = 0;
        int Cons = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                Cons++;
                maxCons = max(Cons,maxCons);
            }else if(nums[i] == 0){
                Cons = 0;
            }
        }
        return maxCons;
    }
};