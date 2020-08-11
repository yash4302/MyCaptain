#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mark;
    char grade;
    printf("Enter your Percentage : ");
    scanf("%d", &mark);

    if(mark >= 85 && mark <=100)
        grade = 'A';
    else if(mark >= 70 && mark < 85)
        grade = 'B';
    else if(mark >= 55 && mark < 70)
        grade = 'C';
    else if(mark >= 40 && mark < 55)
        grade = 'D';
    else if(mark >= 0 && mark < 40)
        grade = 'F';
    else
        grade = 'Z';
    
    if(grade == 'Z')
        printf("Invalid Marks...\n");
    else
        printf("Your Grade : %c\n", grade);
    return 0;
}
