#include <iostream>

using namespace std;

bool is_prime(int n);

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    cout << endl;
    for(int i=2; i<=num/2; i++)
        if(is_prime(i) && is_prime(num-i))
            cout << num << " = " << i << " + " << num-i << endl;
    return 0;
}

bool is_prime(int n)
{
    bool flag = true;
    for(int i=2; i<=n/2; i++)
        if(n%i == 0)
            flag = false;
    return flag;
}
