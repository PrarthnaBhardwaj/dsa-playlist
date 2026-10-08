// Floor and ceil in a sorted array:
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
int floorCeil(vector<int>&nums,int target){
int n = nums.size();
int start = 0,end = n-1;
int ans = -1;
while(start<=end)
{
    int mid = (start+end)/2;
   if(nums[mid]<=target)
   {
     ans = nums[mid];
    start = mid +1;
   }
    else
    end = mid-1;
}
return ans;
}
};
int main(){
    int n;
    cout<<"Enter your total number of elements:";
    cin>>n;
    int target;
    cout<<"Enter your targeted value:";
    cin>>target;
    vector<int>arr;
    cout<<"Enter your elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Solution obj;
    cout<<obj.floorCeil(arr,target);
}
