#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution{
    public:
        int minElement(vector<int>&nums){
    int n = nums.size();
    int start = 0,end = n-1,mid = 0,minEl = INT_MAX;
    while(start<=end)
    {
        mid = (start + end)/2;
        if(nums[start]<nums[end])
        {
            minEl = min(minEl,nums[start]);
            break;
        }
        // if left half is sorted:
        if(nums[start]<nums[mid])
        {
            minEl = min(minEl,nums[start]);
            start = mid +1;
        }
        // if right half is sorted:
        if(nums[mid]<=nums[end])
        {
            minEl = min(minEl,nums[mid]);
            end = mid-1;
        }
    }
    return minEl;
}
};

int main(){
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
    cout<<obj.minElement(arr);
    return 0;
}
