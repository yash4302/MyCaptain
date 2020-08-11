#include <stdio.h>

int main()
{
    int arr[3][3];
    printf("Enter Matrix Element : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Element[%d][%d] : ", i+1, j+1);
            scanf("%d", *(arr+i)+j);
        }
    }
    printf("\nMatrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ", *(*(arr+i)+j) );
        printf("\n");
    }
    return 0;
}
