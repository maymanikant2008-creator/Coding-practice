#include <stdio.h>

int main() {
    
    float  a,b;
    printf("entre the value of a ");
    scanf("%f",&a);
    
    printf("entre the value of b ");
    scanf("%f",&b);
    
    char oper;
    
    printf("what is your operator [+,-,*,/]");
    scanf(" %c",&oper);
    
    if (oper == '+'){
    	printf("%f",a+b);
	}
	else if (oper == '-'){
		printf("%f",a-b);
	}
	else if (oper == '*'){
		printf("%f",a*b);
	}
	else if (oper == '/'){
		printf("%f",a/b);
	}
	
    return 0;
}
