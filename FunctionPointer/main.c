#include <stdio.h>


void function(int);
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);


int main()
{
    double num1 = 4.43, num2 = 3.2;
    void (*function_pointer)(int) = function;
    double (*operation[])(double, double) = {
        add, subtract, multiply, divide
        };

    double sum = operation[0](num1, num2);
    double dif = operation[1](num1, num2);
    double mul = operation[2](num1, num2);
    double div = operation[3](num1, num2);

    printf("\e[3mAdd\t:\t%lf\n", sum); 
    printf("Subtract:\t%lf\n", dif);
    printf("Multiply:\t%lf\n", mul);
    printf("Divide\t:\t%lf\n", div);

    return 0;
}


void function(int x) { printf("x: %d\n", x); }

double add(double x, double y) { return x + y; }

double subtract(double x, double y) { return x - y; }

double multiply(double x, double y) { return x * y; }

double divide(double x, double y) { return x / y; }