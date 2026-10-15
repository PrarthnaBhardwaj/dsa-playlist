// use binary search:
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
int calculate(int mid,int x,int m)
{
    long long ans = 1;
    for(int i = 0;i<x;i++)
    {
       ans = ans*mid;
        if(ans>m) return 2;
    }
    if(ans==m) return 1;
    return 0;
}
int nthRootofnumber(int x,int m) // x = nth , m = number
{
    int start = 1,end = m-1,mid = 0;
    while(start<=end)
    {
        mid = (start + end)/2;
        int midFxn = calculate(mid,x,m);
        if(midFxn == 1) return mid;
        else if(midFxn == 2) end = mid-1;
        else
       start = mid+1;
    }
    return -1;
}
};
int main(){
    int m;
    cout<<"Enter your number for which nth root calculates:";
    cin>>m;
    int x;
    cout<<"Enter the nth root:";
    cin>>x;
    Solution obj;
    cout<<obj.nthRootofnumber(x,m);
}
