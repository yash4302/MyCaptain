#include <iostream>

using namespace std;

class Time
{
    int hh,mm,ss, seconds;
public:
    void input();
    void output();
};

int main()
{
    Time t;
    t.input();
    t.output();
    return 0;
}

void Time::input()
{
    cout << "Enter Time : " << endl;
    cout << "Hour : ";
    cin >> hh;
    cout << "Minutes : ";
    cin >> mm;
    cout << "Second : ";
    cin >> ss;
}

void Time::output()
{
    seconds = hh*3600 + mm*60 +ss;
    cout << "\nSeconds : " << seconds << endl;
}
