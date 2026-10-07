// Concept of lower bound: (nums[i]>=target)
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int Insert_pos(vector<int>&nums,int target)
    {
        int n = nums.size();
        int pos = -1;
        int start = 0,end = n-1;
        int mid = 0;
        while(start<=end)
        {
            mid = (start + end)/2;
            if(nums[mid]>=target)
          {
              pos = mid;
              end = mid - 1;
          }

            else if(nums[mid]<target)
            start = mid + 1;
        }
        return pos;
    }
};
int main(){
     int target;
    cout<<"Enter your element which to be searched"<<endl;
    cin>>target;
   int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements of the array:";
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Solution obj;
    cout<<obj.Insert_pos(arr,target);
    return 0;
}