// Print name 5 times;
#include<iostream>
using namespace std;
void print(int count){
    if(count == 5) return;
    else{
        cout<<"Name"<<endl;
        count++;
        print(count);
    }
}
int main()
{
    int count = 0;
    print(count);
    return 0;
}