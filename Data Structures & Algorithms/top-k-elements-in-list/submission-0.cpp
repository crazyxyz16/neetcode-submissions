class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        vector<pair<int,int>> p;
        for (auto it : mp) {
            p.push_back({it.second, it.first});
        }
        sort(p.rbegin(),p.rend());
        vector<int> output;
        for (int i = 0; i < k; i++) {
            output.push_back(p[i].second);
        }
        
        return output;
    }
};
