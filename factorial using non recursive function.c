#include <stdio.h>
long long factorial(int n)  {
    long long f=1;
    int i;
    for(i=1; i<=n; i++)
        f *= i;
    return f;
}
int main()  {
    int n;
    printf("Enter an Integers: ");
    scanf("%d", &n);
    if(n<0)
        printf("Factorial is not defined for negative integers.\n");
    else 
        printf("Factorial = %lld\n", factorial(n));
    return 0;
}