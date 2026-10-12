#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int countRotation(vector<int>&nums){
        int n = nums.size();
        int start = 0,end = n-1,mid = 0;
        int ans = 0;
        while(start<=end)
        {
            mid = (start + end)/2;
            if(nums[start]<nums[end])
           {
             ans = start;
             return ans;
           }
           //for left half array:
           if(nums[start]<nums[mid])
           {
            ans = start;
           start = mid+1;
           }
           // if the right half is sorted:
           if(nums[mid]<nums[end])
           {
            ans = mid;
            end = mid -1;
           }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout<<"Enter your total number of elements:";
    cin>>n;
     vector<int>arr;
    cout<<"Enter your elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Solution obj;
    cout<< obj.countRotation(arr);
    
    return 0;
}