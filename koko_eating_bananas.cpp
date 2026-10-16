class Solution {
public:
long long perHour(vector<int>&nums,int hour)
{
    int n = nums.size();
    long long sum = 0;
    for(int i = 0;i<n;i++){
     sum += ceil((double)nums[i]/(double)hour);
    }
 
    return sum;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        // By using binary search:
        int maxEl = *max_element(piles.begin(),piles.end());
        int start = 1,end = maxEl,mid = 0;
        long long reqTime = 0;
        while(start<=end)
        {
            mid = (start + end)/2;
            reqTime = perHour(piles,mid);
            if(reqTime<=h)
                end = mid-1;
                else
                start = mid+1;
        }
     return start;
    }
}; 