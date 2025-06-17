class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]] = i;
        // }
        for(int i=0;i<nums.size();i++){
            int other=target-nums[i];
            if(mp.find(other)!=mp.end()){
                if(mp[other]!=i) return {i,mp[other]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};