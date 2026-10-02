#include<iostream>
#include <climits>
#include<vector>
using namespace std;
class Solution{
    public:
    int maxSubArray(vector<int>&nums)
    {
        int n = nums.size();
        int sum = 0;
        int start = 0;
        int ansStart = -1;
        int ansEnd = -1;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            if(sum == 0) start = i;
            sum+=nums[i];
            if(sum>maxi)
            {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
                
            }
            if(sum<0)
            sum = 0;
        }
        return maxi;
    }
};
int main(){
    int n;
    cout<<"Enter your total number of elements:";
    cin>>n;
    vector<int>arr;
    cout<<"Enter your elements:"<<endl;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Solution obj;
    cout<<"Your maximum subarray sum is:"<<obj.maxSubArray(arr);
}