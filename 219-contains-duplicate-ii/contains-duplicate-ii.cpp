class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        for (int i = 0; i < (int)nums.size(); i++) {
            // If map already has the number and diff between indices 
            if (mp.count(nums[i]) && i - mp[nums[i]] <= k) {
                return true;
            }
            // Update 
            mp[nums[i]] = i;
        }
        return false;
    }
};