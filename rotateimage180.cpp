#include<iostream>
using namespace std;
int main()
{
    int row=4;
    int col=4;
    int matrix[row][col]={
    {1,2,3,4}
    ,{5,6,7,8}
    ,{9,10,11,12}
    ,{13,14,15,16}
    };
    //Rotate image by 180degree
    int start=0,end=row-1;
    while(start<end)
    {
        for(int i=0;i<col;i++)
        swap(matrix[start][i],matrix[end][i]);
        start++,end--;
    }
    // now reverse all the rows:
    int start1=0,end1=row-1;
    for(int i=0;i<row;i++)
    {
        start1=0,end1=row-1;
        while(start<end)
        {
        swap(matrix[i][start1],matrix[i][end1]);
        start++,end--;
        } 
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<matrix[i][j]<<" ";
    }
    return 0;
}