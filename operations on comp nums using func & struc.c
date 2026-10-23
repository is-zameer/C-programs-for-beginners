#include<stdio.h>
typedef struct  {
    float real;
    float imag;
} Complex;
Complex add(Complex a, Complex b)   {
    Complex r = {a.real + b.real, a.imag + b.imag};
    return r;
}
Complex subtract(Complex a, Complex b)  {
    Complex r = {a.real - b.real, a.imag - b.imag};
    return r;
}
Complex multiply(Complex a, Complex b)  {
    Complex r;
    r.real = a.real * b.real - a.imag * b.imag;
    r.imag = a.real * b.imag + a.imag * b.real;
    return r;
}
void display(Complex c) {
    printf("%.2f %c %.2fi", c.real, c.imag >= 0 ? '+' : '-', c.imag >= 0 ? c.imag : -c.imag);
}
int main()  {
    Complex a, b;
    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &b.real, &b.imag);
    printf("Addition = "); display(add(a, b)); printf("\n");
    printf("Subtraction = "); display(subtract(a, b)); printf("\n");
    printf("Multiplication = "); display(multiply(a, b)); printf("\n");
    return 0;
}