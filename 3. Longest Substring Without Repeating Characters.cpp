class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int maxi=0,st=-1;

        for(int i=0;i<s.size();i++){
            if(v[s[i]]>st)
                st = v[s[i]];
            v[s[i]] = i;
            maxi = max(maxi,i-st);
        }
        return maxi;
    }
};
