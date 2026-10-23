#include<stdio.h>
int main()  {
    FILE *source, *target;
    int ch;
    source = fopen("source.txt", "r");
    target = fopen("target.txt", "w");
    if(source == NULL || target == NULL) {
        printf("Unable to open file.\n");
        if(source)  fclose(source);
        if(target)  fclose(target);
        return 1;
    }
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }
    fclose(source);
    fclose(target);
    printf("File copied successfully.\n");
    return 0;
}