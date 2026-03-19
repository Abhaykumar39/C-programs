#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("abc.txt", "r");

    if(fp == NULL)
    {
        perror("Error");
        return 0;
    }

    if(ferror(fp))
        printf("File error occurred");

    fclose(fp);
    return 0;
}
