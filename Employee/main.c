#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char* name;
    int age;
    long long contact;
    int salary;
};

int main()
{
    struct Employee e[3] = { {"Chirag", 24, 1234567788, 20000}, {"Aranv", 31, 1234567891, 56000}, {"Shivam", 45, 1234567890, 30500} };
    printf("  Name\t Age\t Contact\t Salary\n");
    for(int i=0; i<3; i++)
    {
        printf(" %s", e[i].name);
        printf("\t %d", e[i].age);
        printf("\t%d", e[i].contact);
        printf("\t %d\n", e[i].salary);
    }
    return 0;
}
