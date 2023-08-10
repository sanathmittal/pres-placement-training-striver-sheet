class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=-1;
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                temp++;
            else{
                maxi=max(temp,maxi);
                temp=0;
            }
        }
        if(temp>maxi)
        maxi=temp;
        return maxi;
    }
};
