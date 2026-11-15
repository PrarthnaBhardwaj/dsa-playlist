#include<iostream>
using namespace std;
int fibonacci(int n){
if(n<=1) return n;
else{
    int firstTerm = fibonacci(n-1);
   int secondTerm = fibonacci(n-2);
    return firstTerm + secondTerm;
}
}
int main(){
    int n;
    cout<<"Enter your number of terms:";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}