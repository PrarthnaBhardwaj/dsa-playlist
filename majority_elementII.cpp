// return vector of majority elements:
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
vector<int>majorityElement(vector<int>&nums)
{
    int e1=0,e2=0;
    int count1=0,count2=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(count1==0&&nums[i]!=e2)
        {
            e1=nums[i];
            count1++;
        }
        else if(count2==0&&nums[i]!=e1)
        {
            e2=nums[i];
            count2++;
        }
        else if(nums[i]==e1)count1++;
        else if(nums[i]==e2)count2++;
        else
        {
            count1--;
            count2--;
        }
    }
        vector<int>temp;
        count1=0,count2=0;
        for(int i=0;i<n;i++)
       {
         if(nums[i]==e1)count1++;
        if(nums[i]==e2)count2++;
       }
    if(count1>n/3) temp.push_back(e1);
    if(count2>n/3) temp.push_back(e2);
       
    return temp;
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
    vector<int>ans = obj.majorityElement(arr);
    int  a= ans.size();
    for(int i=0;i<a;i++)
    cout<<ans[i]<<" ";
    return 0;
}