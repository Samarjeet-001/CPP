#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter Year: ";
    cin >> a;
    if(a % 4 == 0 && a % 400 == 0)
    {
        cout << "Leap Year";
    }
    else if(a % 4 == 0 && a % 100 != 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not Leap Year";
    }
    return 0;
}