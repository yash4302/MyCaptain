#include <iostream>

using namespace std;

int main()
{
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;

    double a,b;
    cout << "\nEnter two Numbers : ";
    cin >> a >> b;
    cout << "Product : " << a*b << endl;
    return 0;
}
