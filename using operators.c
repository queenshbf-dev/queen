/*BELARMINO, QUEEN SHEKINAH F. DIT 1-2
Using Operators*/

#include <stdio.h>
int main (void)
{
    int num1, num2, add, sub, mul, div;
    int a = 50;
    int b = 30;
    int c = 1;
    int d = 0;
    int result_and = a > b && c;
    int result_or = a < b || c;
    int result_not = !d;
    a /= 10;

    printf("Enter given numbers:");
    scanf("%d%d", &num1, &num2);
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    printf("\n The sum is:%d", add);
    printf("\n The difference is:%d", sub);
    printf("\n The product is:%d", mul);
    printf("\n The quotient is:%d", div);
    printf("\nResult AND: %d\n", result_and);
    printf("Result OR: %d\n", result_or);
    printf("Result NOT: %d\n", result_not);
    printf("Updated value_a: %d\n", a);

    return 0;
}
