#include <stdio.h>
#include <string.h>
int isPalindrome(const char str[])  {
    int i=0, j=strlen(str)-1;
    while(i<j)  {
        if(str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main()  {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    if(isPalindrome(str))
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");
    return 0;
}