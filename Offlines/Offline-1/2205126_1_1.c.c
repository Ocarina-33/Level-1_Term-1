#include <stdio.h>
int main()
{
    double a, b, calc;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);

    if ((op != '+' && op != '-' && op != '*' && op != '/') || b == 0)
    {
        printf("Error!");
    }
    switch (op)
    {
    case '+':
        calc = a + b;
        printf("%lf", calc);
        break;

    case '-':
        calc = a - b;
        printf("%lf", calc);
        break;

    case '*':
        calc = a * b;
        printf("%lf", calc);
        break;

    case '/':
        calc = a / b;
        printf("%lf", calc);
        break;
    }

    return 0;
}