#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={1,2,3,4,5,6};
    int d;
    cout<<"Enter your rotating number:";
    cin>>d;
    // to rotate the array d times:
    // make a temp array to store first d elements:
    int temp[d];
    //d=d%n;
    for(int i=0;i<d;i++) // o(d)
    temp[i]=arr[i];
    // now put remaining n-d elements to first and so on place:
    for(int i=d;i<6;i++) // o(n-d)
    
        arr[i-d]=arr[i];
    // now shiftimg of temp elements back to their place to rotate:
    for(int i=6-d;i<6;i++) // o(d)

    arr[i]=temp[i-(6-d)];
    // printing:
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";   
}  

// total time comp: o(d) + o(n-d) + o(d) = o(n-d+d+d) = o(n-d)
// space comp = o(d)

   
