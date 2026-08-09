#include <stdio.h>

int main()
{    
      int a,b,c;
      printf("entre value of a\n");
      scanf("%d",&a);
      
      
      printf("entre value of b\n");
      scanf("%d",&b);
      
      
      printf("entre value of c\n");
      scanf("%d",&c);
      
      if (a>=b&&a>=c) {
      	printf("largest number = %d",a);
	  }
	  else if (b>=a&&b>=c) {
	  	printf("largest number = %d",b);
	  }
	  else {
	  	printf("largest number = %d",c);
	  }
}
    
