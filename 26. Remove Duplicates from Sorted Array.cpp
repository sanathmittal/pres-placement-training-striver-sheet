class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int temp=nums[n-1]+1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                nums[i-1]=temp;
        }
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=temp)
                c++;

        return c;
        // for(int i=1; i<nums.size(); i++) {
        //     if(nums[i] == nums[i-1]) {
        //         nums[i-1] = INT_MAX;
        //     }
        // }
        // sort(nums.begin(), nums.end());
 
        // int count = 0;
        // for(int i=0; i<nums.size(); i++) {
        //     if(nums[i] != INT_MAX) count++;
        // }

        // return count;
    }
};
