#include<stdio.h>
int main(){
	printf("======calculatOr======\n");
	int num1,num2,choice , num;
	printf("enter number --1:");
	scanf("%d",&num1);
	printf("enter num2 --2:");
	scanf("%d",&num2);
	printf("==== CALCULATOR MENU ==== \n");
	printf("\n1--ADDITION--\n");
	printf("\n2--SUBTRACTION--\n");
	printf("\n3--multiflication--\n");
	printf("\n4--division\n");
	// choice
	printf("\nenter choice:");
	scanf("%d",&choice);
	// switch 
	switch(choice){
		case 1:
		   	num = num1 + num2;
		 	printf("result = %d",num);
		 	 break;
	    case 2:
		     num = num1 - num2;
		     printf("result = %d",num);
		      break;
	    case 3:
	    	 num = num1 * num2;
	    	 printf("result = %d",num);
	    	  break;
	    case 4:
	    	 num = num1 / num2;
	    	 printf("result = %d",num);
	    	  break;
	    default:
	    	  printf("invalid operater:");
   } 
         return 0;
 }
