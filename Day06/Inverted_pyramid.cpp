#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i = n;i >= 1;i--)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        for(int k = 1;k <= (n-i)-1*k;k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}