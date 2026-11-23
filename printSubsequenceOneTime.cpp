#include<iostream>
#include<vector>
using namespace std;
bool printS(int ind,vector<int>&ds,int s,int sum,int arr[],int n)
{
    if(ind == n)
    {
        if(s == sum)
        {
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    // for next index:
    if(printS(ind+1,ds,s,sum,arr,n) == true) return true;
    ds.pop_back();
    s -= arr[ind];
    // not picking up:
    if(printS(ind+1,ds,s,sum,arr,n) == true) return true;
    return false;
}
int main(){
    int arr[1000] = {1,2,1};
    int n = 3;
    int sum = 2;
    int s = 0;
    vector<int>ds;
    printS(0,ds,s,sum,arr,n);
    return 0;
}