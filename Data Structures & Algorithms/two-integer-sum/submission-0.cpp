class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i = 0;i<n;i++){
            int target1 = nums[i];
            if(mp.find(target - target1) != mp.end()){
                return {mp[target - target1], i};
            }
            mp[target1] = i;     
        }
        return {};
    }
};
