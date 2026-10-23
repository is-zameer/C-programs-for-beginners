#include<stdio.h>
#include<string.h>
int main() {
    char s[200], t[100];
    char *p;
    printf("Enter main string S: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Enter substring T: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';
    p = strstr(s, t);
    if(p != NULL)
        printf("Substring begins at index = %ld\n", (long)(p-s));
    else
        printf("Substring not found. Index = -1\n");
    return 0;
}