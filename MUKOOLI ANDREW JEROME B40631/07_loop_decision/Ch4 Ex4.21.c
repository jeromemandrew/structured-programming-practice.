#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("**************************\n");
    printf("LOOP WITH DECISION\n");
    printf("**************************\n");

    int f, pass=0, fail=0;
    int i;

    for(i=1;i<=5;i++)
    {
        printf("\nStudent %d (1=pass,2=fail): ",i);
        scanf("%d",&f);
        if(f==1) pass++;
        else fail++;
    }
    printf("Passed %d\n",pass);

    printf("Failed %d\n",fail);


    return 0;
}
