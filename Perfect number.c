#include <stdio.h>
int main()  {
    int n, i, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(n%i == 0)
        sum += 1;
    }
    if(n>0 && sum == 0)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is not a Perfect Number.\n", n);
    return 0;
}