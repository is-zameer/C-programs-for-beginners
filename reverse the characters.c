#include<stdio.h>
#include <stdlib.h>
int main()  {
    FILE *fp;
    char data[1000];
    int n, i, count = 0, ch;
    fp = fopen("input.txt", "r+");
    if(fp == NULL)  {
        printf("Unable to open file. \n");
        return 1;
    }
    printf("Enter n: ");
    scanf("%d", &n);
    if(n<0 || n >= 1000)    {
        printf("Invalid value of n. \n");
        fclose(fp);
        return 1;
    }
    while(count < n && (ch = fgetc(fp)) != EOF)
        data[count++] = (char)ch;
    for(i=0; i < count / 2 ; i++)  {
        char temp = data[i];
        data[i] = data[count - 1 - i];
        data[count - 1 - i] = temp;
    }
    rewind(fp);
    for(i=0; i < count; i++)
        fputc(data[i], fp);
    fclose(fp);
    printf("First %d characters reversed successfully. \n", count);
    return 0;
}