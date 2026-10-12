#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>countSmaller(vector<int>&nums){
    int n = nums.size();
    // brute force approach:
    // vector for storing sorted num:
    vector<int>temp = nums;
    sort(temp.begin(),temp.end());
    vector<int>ans;
    for(int i = 0;i< n;i++)
    {
        int count = 0;
        for(int j = 0;j<n;j++)
        {
            if(nums[i]>temp[j])
            count++;
        }
        ans.push_back(count);
        
    }
    return ans;
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
    vector<int>ans = countSmaller(arr);
    cout<<"The count of smaller elements than current element are:"<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}