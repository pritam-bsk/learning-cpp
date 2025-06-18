class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> hash;
        hash[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum - k;
            count += hash[rem];
            hash[sum] += 1;      
        } 
        return count;
    }
};