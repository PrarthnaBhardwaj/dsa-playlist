#include<iostream>
#include<vector>
using namespace std;
void Subsequence(int i,int arr[],vector<int>&ds,int n){
    if(i == n)
    {
        for(auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0)
      {
          cout<<"{}";
      }
      cout<<endl;
        return ;
    }
    else{
        ds.push_back(arr[i]);
        Subsequence(i+1,arr,ds,n);
        ds.pop_back();
        Subsequence(i+1,arr,ds,n);
    }
}
int main()
{
    int arr[1000] = {3,1,2};
    int n = 3;
    vector<int>ds;
    Subsequence(0,arr,ds,n);
}