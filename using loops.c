/*BELARMINO, QUEEN SHEKINAH F. DIT 1-2
Using Loops*/

#include <stdio.h>

int main (void)

{
    int q = 1;
    printf("While Loop_Print numbers from 1 to 10:\n");
    while (q <= 10) {
        printf("%d\n", q);
    q++;
}
printf("\nFor Loop_Print even numbers from 2 to 20:\n");
    int s;
    for (s = 2; s <= 20; s+= 2) {
        printf("%d\n",s);

}
    printf("\nDo-While Loop_Print numbers from 1 to 5:\n");
    int b = 1;
    do{
        printf("%d\n",b);
        b++;
    }
    while (b <= 5);
}
