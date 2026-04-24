class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int largest = 0;

        for(auto num : st){
            if(st.find(num - 1) == st.end()){
                int length = 1;
                while(st.find(num + length) != st.end()){
                    length++;
                }
                largest = max(largest,length);
            }
        }
        return largest;
    }
};
