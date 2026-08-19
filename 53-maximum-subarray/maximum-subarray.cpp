class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        int maxsum=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            

            maxsum=max(nums[i],maxsum+nums[i]);
           

            res=max(res,maxsum);
        }
        return res;
    }
};