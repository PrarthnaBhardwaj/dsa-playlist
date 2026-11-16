// count digits of a number using recursion:
#include<iostream>
using namespace std;

int countDigits(int n)
{
    if(n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n == 0)
        cout << 1;
    else
        cout << countDigits(abs(n));

    return 0;
}