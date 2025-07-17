#include<iostream>
using namespace std;
void bubble(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}
int main()
{
    int a,b,c,largest,smallest;
    int arr[3];
    cout << "Enter Three Numbers: ";
    for(int i = 0;i < 3;i++)
    {
        cin >> arr[i];
    }
    bubble(arr, 3);
    if(arr[0] > arr[1] && arr[0] > arr[2])
    {
        largest = arr[0];
    }
    else if(arr[1] > arr[0] && arr[1] > arr[2])
    {
        largest = arr[1];
    }
    else if(arr[2] > arr[1] && arr[2] > arr[0])
    {
        largest = arr[2];
    }
    if(arr[0] < arr[1] && arr[0] < arr[2])
    {
        smallest = arr[0];
    }
    else if(arr[1] < arr[0] && arr[1] < arr[2])
    {
        smallest = arr[1];
    }
    else if(arr[2] < arr[1] && arr[2] < arr[0])
    {
        smallest = arr[2];
    }
    
    cout << "Largest: " << largest << endl << "Smallest: " << smallest << endl;
    for(int j = 0;j < 3;j++)
    {
        cout << arr[j] << " ";
    }
        return 0;

}