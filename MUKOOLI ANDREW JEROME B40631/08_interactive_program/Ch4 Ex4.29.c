#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("****************************\n");
   printf("INTERACTIVE CONSOLE PROGRAM\n");
   printf("****************************\n");


   int c;
   float x,y;

   do{
    printf("\n1.Add 2.Sub 3.Mul 4.Div 0.Exit\nChoice: ");
    scanf("%d",&c);

    if(c>=1 && c<=4)
    {
        printf("Two numbers: \n");
        scanf("%f%f",&x,&y);
    }
    if(c==1)
        printf("%.2f\n",x+y);
    if(c==2)
        printf("%.2f\n",x-y);
    if(c==3)
        printf("%.2f\n",x*y);
    if(c==4)
        printf(y!=0?"%.2f\n":"No Zero div\n",x/y);
   }while(c!=0);
    return 0;
}
