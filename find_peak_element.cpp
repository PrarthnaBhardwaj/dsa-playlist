// Find peak element: arr[i-1]<arr[i]>arr[i+1]
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // finding peak element:
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        int low = 1,high = n-2,mid=0;
        while(low<=high)
        {
            mid = (low + high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid]>nums[mid-1])
                low = mid+1; // go to right side:
            else if(nums[mid]>nums[mid+1])
                high = mid-1; // go to left side
            else
            high = mid-1; // either go loft or right
        }
        return -1;
    }
};
