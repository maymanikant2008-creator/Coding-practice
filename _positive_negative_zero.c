#include <stdio.h>

int main()
{
   int a ;
   printf("entre value of a ");
   scanf("%d",&a);
   
   if (a >0) {
   	printf("a is postive number \n");
   }
   else if (a<0) {
   	printf("a is negative number \n");
   }
   else {
   	printf("a is zero ");
   }
    
    return 0;
}
