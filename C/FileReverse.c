#include <stdio.h>

int main()
{
    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL)
        printf("Error in opening file");
    else
    {
        fseek(fp,-1L,SEEK_END);
        char ch;
        int cnt = ftell(fp) + 1;
        while(cnt)
        {
            ch = fgetc(fp);
            printf("%c", ch);
            fseek(fp, -2L, SEEK_CUR);
            cnt--;
        }
    }
    printf("\n");
    fclose(fp);
    return 0;
}
