#include <stdio.h>

int main()
{
   int a,b,c;
   printf("entre value of a ");
   scanf("%d",&a);
   
   printf("entre value of b ");
   scanf("%d",&b);
   
   printf("entre value of c ");
   scanf("%d",&c);
   
   int num;
   num = a*100+b*10+c;
   
   if (a*a*a+b*b*b+c*c*c == num ) {
   	printf("num is amrstrong number ");
   }
   else {
   	printf("num is not armstong number ");
   	
   }
       return 0;
}
