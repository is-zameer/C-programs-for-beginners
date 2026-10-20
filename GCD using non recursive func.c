#include <stdio.h>
int gcd(int a, int b)   {
    int r;
    if(a<0) a = -a;
    if(b<0) b = -b;
    while(b != 0)   {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()  {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcd(a, b));
    return 0;
}