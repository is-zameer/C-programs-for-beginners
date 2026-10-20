#include <stdio.h>
int factorial(int n)    {
    int f=1, i;
    for(i=1; i<=n; i++)
        f *= i;
    return f;
}
int main()  {
    int n, original, digit, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    original = n;
    while(n>0)  {
        digit = n%10;
        sum += factorial(digit);
        n /= 10;
    }
    if(sum == original)
        printf("%d is a Strong Number.\n", original);
    else    
        printf("%d is not a Strong Number.\n", original);
    return 0;
}