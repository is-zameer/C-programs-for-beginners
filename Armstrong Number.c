#include <stdio.h>
int main()  {
    int n, original, digits = 0, digit;
    int sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    original = n;
    if(n == 0)
        digits = 1;
    else    {
        int temp = n;
        while(temp > 0) {
            digits++;
            temp /= 10;
        }
    }
    while(n > 0)    {
        digit = n % 10;
        sum += (int)pow(digit, digits);
        n /= 10;
    }
    if(sum == original)
        printf("%d is an Armstrong Number. \n", original);
    else
        printf("%d is not an Armstorng Number. \n", original);
    return 0;
}