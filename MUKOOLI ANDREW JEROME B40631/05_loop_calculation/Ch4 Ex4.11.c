#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("==========================\n");
   printf(" LOOP WITH CALCULATION\n");
   printf("==========================\n");

    int sum=0,i;
    for(i=2;i<=100;i+=2)
    {
        sum+=i;

    }
    printf("\nSum 2-100 even = %d\n",sum);
    return 0;
}
