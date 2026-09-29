#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=======================\n");
    printf("LOOP WITH USER INPUT\n");
    printf("=======================\n");


    int n,i,tot=0;

    for(i=1;i<=5;i++)
    {
        printf("\nEnter mark %d: ",i);
        scanf("%d",&n);
        tot+=n;
    }
    printf("\nAverage= %.2f\n",tot/5.0);

    return 0;
}
