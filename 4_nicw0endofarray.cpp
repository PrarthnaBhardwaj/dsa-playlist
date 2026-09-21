// Move all zeros to the end of the array:
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[1000]={1,0,2,3,2,0,0,4,5,1};
    // arr[]={1,2,3,2,4,5,1,0,0,0};
   int j=-1;
   for(int i=0;i<10;i++)
   {
    if(arr[i]==0)
    {
         j=i;
        break;
    }
   }
   if(j==-1)
   return 0;
   
   for(int i=j+1;i<10;i++)
   {
    if(arr[i]!=0)
    {
        swap(arr[i],arr[j]);
        j++;
    }
   }
   for(int i=0;i<10;i++)
   cout<<arr[i]<<" ";
    return 0;
}


  