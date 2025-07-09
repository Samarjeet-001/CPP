#include<iostream>
using namespace std;
int main()
{
    int n,digit = 0,sum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    while(n != 0)
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << "Sum of Digits is " << sum ;
    return 0;
}