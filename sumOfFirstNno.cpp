// Sum of first n no.:
// parameterized recursion:
#include<iostream>
using namespace std;
int sum(int i,int value){
if(i<1) return value;
else{
    sum(i-1,value+i);
}
}
int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;
    int value = 0;
    cout<<sum(n,value);
    return 0;
}