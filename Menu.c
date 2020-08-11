#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choice;
    printf("1. Pizza, Rs. 239\n");
    printf("2. Burger, Rs. 129\n");
    printf("3. Pasta, Rs. 179\n");
    printf("4. French Fries, Rs. 99\n");
    printf("5. Sandwich, Rs. 149\n");
    printf("\nEnter your Choice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Food item : Pizza\nPrice : Rs. 239\n");
            break;
        case 2:
            printf("Food item : Burger\nPrice : Rs. 129\n");
            break;
        case 3:
            printf("Food item : Pasta\nPrice : Rs. 179\n");
            break;
        case 4:
            printf("Food item : French Fries\nPrice : Rs. 99\n");
            break;
        case 5:
            printf("Food item : Sandwich\n Price : Rs. 149\n");
            break;
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}
