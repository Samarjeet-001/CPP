#include<iostream>
using namespace std;
int x = 5; // Global Scope
int main()
{
    int y = 6; // Local Scope
    cout << x << endl << y << endl;
    return 0;
}