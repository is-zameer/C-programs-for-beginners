#include <stdio.h>
long long factorial(int n)  {
    if(n <= 1)
        return 1;
    return n*factorial(n-1);
}
int main()  {
    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    if(n<0)
        printf("factorial is not defined for negative integers.\n");
    else   
        printf("Factorial = %lld\n", factorial(n));
    return 0;
}