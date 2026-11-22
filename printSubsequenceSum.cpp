#include<iostream>
#include<vector>
using namespace std;
void printS(int ind,vector<int>&ds,int s,int sum,int arr[],int n)
{
    if(ind == n)
    {
        if(s == sum)
        {
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    // for next index:
    printS(ind+1,ds,s,sum,arr,n);
    ds.pop_back(t i);
    s -= arr[ind];
    // not picking up:
    printS(ind+1,ds,s,sum,arr,n);
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