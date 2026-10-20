#include <stdio.h>
int  main() {
    double a, b;
    char op;
    printf("Enter Expression (e.g. 10+5): ");
    scanf("%lf %c %lf", &a, &op, &b);
    switch(op)   {
        case '+': printf("Result = %.2f\n", a+b);   break;
        case '-': printf("Result = %.2f\n", a-b);   break;
        case '*': printf("Result = %.2f\n", a*b);   break;
        case '/': 
            if(b == 0)
                printf("division by zero is not allowed.\n");
            else 
                printf("Result = %.2f\n", a/b); break;
        case '%':
            if((int)b == 0)
                printf("modulas by zero is not allowed.\n");
            else
                printf("Result = %d\n", (int)a % (int)b); break;
        default: 
            printf("Invalid Operator.\n");
    }
    return 0;
}