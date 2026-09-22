#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>findmissingandrepeating(vector<int>&a){
        int n=a.size();
        long long sn=n*(n+1)/2;
        long long sn2=n*(n+1)*(2*n+1)/6;
        long long s1=0,s2=0;

        for(int i=0;i<n;i++)
        {
            s1+=a[i];
            s2+=a[i]*a[i];  
        }
        long long val1=s1-sn;
        long long val2=s2-sn2;
        val2=val2/val1;
      int x=(val1+val2)/2;
        int y=val1-x;
        return {x,y};
    }
};

int main(){
    vector<int>a={4,3,6,2,1,1};
    Solution obj1;
    vector<int>ans=obj1.findmissingandrepeating(a);
    cout<<"Repeating nnumber:"<<ans[0]<<endl;
    cout<<"Missing number:"<<ans[1];
    return 0;
}