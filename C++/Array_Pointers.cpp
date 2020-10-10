#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    cout << "Enter Array Elements : ";
    for(int i=0; i<5; i++)
        cin >> arr[i];
    int *ptr = arr;
    cout << "\nYou entered : ";
    for(int i=0; i<5; i++)
        cout << *(ptr + i) << " ";
    cout << endl;
    return 0;
}
