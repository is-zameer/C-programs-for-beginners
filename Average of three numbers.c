#include <stdio.h>
int main()  {
    float a, b, c, avg;
    printf(" Enter Three Integers: ");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a+b+c)/3.0f;
    printf("The Average of Three number is: %.2f\n", avg);
    return 0;
}