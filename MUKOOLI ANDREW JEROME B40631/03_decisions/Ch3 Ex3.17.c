#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("====================\n");
    printf("    DECISION\n");
    printf("====================\n");

    int marks;

    printf("\nEnter marks (0-100): ");
    scanf("%d",&marks);

    if(marks>=80)
    {
        printf("Grade A\n");
    }else if(marks>=70)
    {
        printf("Grade B\n");
    }else if(marks>=50)
    {
        printf("Grade C\n");
    }else
    {
        printf("Grade F\n");
    }

    return 0;
}
