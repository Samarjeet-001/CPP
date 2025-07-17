#include<iostream>
using namespace std;
int main()
{
    int age,salary;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Salary: ";
    cin >> salary;
    if(age > 18)
    {
        if(salary >= 50000)
        {
            cout << "Eligible";
        }
        else
        {
            cout << "Not Eligible";
        }
    }
    else
    {
        cout << "Not Eligible";
    }
    return 0;
}

