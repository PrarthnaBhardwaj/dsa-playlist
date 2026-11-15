#include<iostream>
#include<string>
using namespace std;
bool ReverseString(int i,string &s)
{
    int n = s.length();
   if(i>=n/2) return true;
   if(s[i] != s[n-i-1]) return false;
   else
   return ReverseString(i+1,s);
}
int main()
{
    string s;
    cout<<"Enter your string:";
    cin>>s;
    if(ReverseString(0,s))
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}