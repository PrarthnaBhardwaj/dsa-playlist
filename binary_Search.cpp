#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int binary_search(vector<int>&nums,int target){
    int n = nums.size();
    int start = 0,end = n-1;
    int mid = 0;
    while(start<=end)
    {
        mid = (start + end)/2;
        if(nums[mid] == target)
        return mid;
        else if(nums[mid]>target)
        end = mid-1;
        else
        start = mid + 1;
    }
    return -1;
}
};

int main(){
    int x;
    cout<<"Enter your element which to be searched"<<endl;
    cin>>x;
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
    cout<<obj.binary_search(arr,x);
    return 0;
}