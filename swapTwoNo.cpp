#include<iostream>
using namespace std;
class Solution{
    public:
    void swap(int &a,int &b){
        // using bit manipulation
        a = a^b;
        // put a in b
        b = a^b; // b = a
        a = a^b;
        // put b in a
        a = a^b;  // a = b
        return;
    }
};