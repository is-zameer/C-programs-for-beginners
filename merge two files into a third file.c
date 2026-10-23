#include<stdio.h>
void copyFile(FILE *source, FILE *target)   {
    int ch;
    while((ch = fgetc(source)) != EOF) 
        fputc(ch, target);
}
int main()  {
    FILE *f1, *f2, *f3;
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    f3 = fopen("merged.txt", "w");
    if(f1 == NULL || f2 == NULL || f3 == NULL)  {
        printf("Unable to open one or more files. \n");
        if(f1) fclose(f1);
        if(f2) fclose(f2);
        if(f3) fclose(f3);
        return 1;
    }
    copyFile(f1, f3);
    copyFile(f2, f3);
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("Files merged successfully into merged.txt. \n");
    return 0;
}