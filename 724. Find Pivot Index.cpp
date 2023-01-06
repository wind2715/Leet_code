class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum(nums.size()+2);
        sum[0]=0;
        sum[1]=nums[0];
        for(int i=2; i<=nums.size(); i++)
        {
            sum[i]=nums[i-1]+sum[i-1];
        }
        for(int i=1; i<sum.size()-1; i++)
        {
            if(sum[i-1]==sum[sum.size()-2]-sum[i]) return i-1;
        }
        return -1;
    }
};
