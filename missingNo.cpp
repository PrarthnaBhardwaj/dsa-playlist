class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum2 = 0;
        long long sum1 = n*(n+1)/2;
        for(int i=0;i<n;i++)
        {
            sum2 = sum2 + nums[i];
        }
        int x = sum1-sum2;
        return x;
    }
};