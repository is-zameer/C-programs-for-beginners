#include <stdio.h>
int main()  {
    float a, b, x, numerator, denominator, result;
    printf("Enter a, b, and x: ");
    scanf("%f %f %f", &a, &b, &x);
    numerator = a*x + b;
    denominator = a*x - b;
    if(denominator == 0)
        printf("Expression is undefined (denominator is zero). \n");
    else {
        result = numerator / denominator;
        printf("Result = %.2f \n", result);
    }
    return 0;
}