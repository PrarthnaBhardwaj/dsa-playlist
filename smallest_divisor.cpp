#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution {
public:
    int SumofD(vector<int>&nums,int div)
    {
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            sum += ceil((float)(nums[i])/(float)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxElement = *max_element(nums.begin(),nums.end());
        int start = 1,end = maxElement,mid = 0;
        while(start<=end)
        {
            mid = (start + end)/2;
            if(SumofD(nums,mid)<=threshold)
            end = mid-1;
            else
            start = mid+1;
        }
        return start;
    }
};
int main(){
      int n;
    cout<<"Enter your total number of elements:";
    cin>>n;
    int threshold;
    cout<<"Enter the value of threshold:";
    cin>>threshold;
     vector<int>arr;
    cout<<"Enter your elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Solution obj;
   cout<<obj. smallestDivisor(arr,threshold);

}