void reverse(vector<int>& nums,int left,int end){
    int n = nums.size();
    while(left<=end){
        int temp = nums[left];
        nums[left]=nums[end];
        nums[end]=temp;
        left++;end--;
    }
}
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1) return;
        k=k%nums.size();
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);
    }
};