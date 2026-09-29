#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("************************\n");
    printf(" INPUT-PROCESS-OUTPUT\n");
    printf("************************\n");

    int a,b;
    float Product,Difference,Sum;

    printf("\nEnter first intenger: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    Product = a*b;
    Difference = a-b;
    Sum = a+b;

    printf("Product= %.2f\n",Product);
    printf("Difference= %.2f\n",Difference);
    printf("Sum= %.2f\n",Sum);

    return 0;
}
