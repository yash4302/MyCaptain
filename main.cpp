#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter Age : ";
    cin >> age;
    if(age >= 18 && age >= 0)
        cout << "You are eligible for vote." << endl;
    else
        cout << "Invalid age or you are not eligible for vote." << endl;

    int marks;
    char grade;
    cout << "\nEnter your marks : ";
    cin >> marks;
    switch(marks)
    {
    case 80 ... 100:
        grade = 'A';
        break;
    case 60 ... 79:
        grade = 'B';
        break;
    case 50 ... 59:
        grade = 'C';
        break;
    case 35 ... 49:
        grade = 'D';
        break;
    case 0 ... 34:
        grade = 'F';
        break;
    default:
        cout << "Invalid marks entry...";
        return 0;
    }
    cout << "Grade : " << grade << endl;
    return 0;
}
