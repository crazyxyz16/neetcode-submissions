class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int m = s.length();
        int n = t.length();
        if(m != n){
            return false;
        }
        for(int i = 0;i<n;i++){
            if(s[i] != t[i]){
                return false;
                break;
            }
            
        }
        return true;
    }
};
