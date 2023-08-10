class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if(a.size()==1)
            return 1;
        sort(a.begin(),a.end());
        int ans=0;
        int temp=1;
        for(int i=1;i<a.size();i++){
            if(a[i]!=a[i-1])
                if(a[i]==a[i-1]+1)
                    temp++;
                else
                    temp=1;
            ans=max(ans,temp);
        }
        return ans;
    }
};
