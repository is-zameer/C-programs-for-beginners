#include<stdio.h>
#include<string.h>
void insertString(char str[], const char sub[], int pos) {
    char temp[300];
    int i, j, len = strlen(str);
    if(pos < 0 || pos > len) return;
    for(i=0; i<pos; i++)
        temp[i] = str[i];
    for(j=0; sub[j] != '\0'; j++)
        temp[i++] = sub[j];
    for(j=pos; str[j] != '\0'; j++)
        temp[i++] = str[j];
    temp[i] = '\0';
    strcpy(str, temp);
}
void deleteChars(char str[], int pos, int n)    {
    int len = strlen(str), i;
    if(pos < 0 || pos >= len || n<0) return;
    if(pos + n > len) n = len - pos;
    for(i=pos; i+n <= len; i++)
        str[i] = str[i + n];
}
int main()  {
    char str[300], sub[100];
    int pos, delPos, n;
    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter substring to insert: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';
    printf("Enter insertion position (0-based): ");
    scanf("%d", &pos);
    insertString(str, sub, pos);
    printf("After insertion: %s\n", str);
    printf("Enter deletion position (0-based and number of characters: )");
    scanf("%d %d", &delPos, &n);
    deleteChars(str, delPos, n);
    printf("After deletion: %s\n", str);
    return 0; 
}