class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos_index = 0;
        int neg_index = 1;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[neg_index] = nums[i];
                neg_index += 2;
            }
            else{
                ans[pos_index] = nums[i];
                pos_index += 2;
            }
        }
        return ans;
    }
};