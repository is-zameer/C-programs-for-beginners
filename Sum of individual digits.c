#include <stdio.h>
int main()  {
    int n, sum=0, digit;
    printf("Enter a Positive integer: ");
    scanf("%d", &n);
    while(n>0)  {
        digit = n%10;
        sum += digit;
        n /= 10;
    }
    printf("Sum of Individual Digits = %d\n", sum);
    return 0;
}