#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
int singleElement(vector<int>&nums)
{
    int n = nums.size();
    if(n == 1) return nums[0];
    if(nums[0]!=nums[1]) return nums[0];
    if(nums[n-1]!=nums[n-1]) return nums[n-1];
    int low = 1,high = n-2,mid = 0;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
        if(mid%2 == 1 && nums[mid] == nums[mid-1] || mid%2 == 0 && nums[mid] == nums[mid+1])
        low = mid+1;
        else
        high = mid-1;
    }
    return -1;
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
    cout<< obj.singleElement(arr);
    return 0;
}
