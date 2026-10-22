class Solution {
public:
int firstOccurrance(vector<int>&arr,int low,int high,int target)
{
    int pos1 = -1,mid = 0;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid] == target)
       {
         pos1 = mid;
        high = mid-1;
       }
     else if(arr[mid] > target)
        high = mid-1;
        else
        low = mid+1;
    }
    return pos1;
}
int lastOccurrance(vector<int>&temp,int low,int high ,int target)
{
    int pos2 = -1,mid = 0;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(temp[mid] == target)
       {
         pos2 = mid;
        low = mid + 1;
       }
     else if(temp[mid] > target)
        high = mid-1;
        else
        low = mid+1;
    }
    return pos2;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
       
 int low = 0,high = n-1;
 if(nums.empty()) return{-1,-1};
         // searching for first occurance:
       ans.push_back(firstOccurrance(nums,low,high,target));
        // searching for last occurrance:
       ans.push_back(lastOccurrance(nums,low,high,target));
return ans;

    }
};