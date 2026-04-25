class Solution {
public:
    int trap(vector<int>& heights) {
        
        int n = heights.size();
        vector<int> lefM(n);
        vector<int> rM(n);
        lefM[0] = heights[0];
        rM[n-1] = heights[n-1];
        for(int i = 1;i<n;i++){
            lefM[i] = max(lefM[i-1],heights[i]);
        }
        for(int i = n-2;i>=0;i--){
            rM[i] = max(rM[i+1],heights[i]);
        }
        int water = 0;

        for(int i = 0;i<n;i++){
            water = water +  (min(lefM[i],rM[i]) - heights[i]);
        }
        return water;
    }
};
