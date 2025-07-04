#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int c;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    cout << "Press 1 for Additon\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\n";
    cin >> c;
    if(c == 4 && b == 0)
    {
        cout << "Invalid";
    }
    else
    {
        switch(c)
        {
            case 1:
            cout << a + b;
            break;
            case 2:
            cout << a - b;
            break;
            case 3:
            cout << a * b;
            break;
            case 4:
            cout << a / b;
            break;
            default:
            cout << "Invalid Choice";
        }
    }
    return 0;
}