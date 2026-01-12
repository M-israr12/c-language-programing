#include<stdio.h>
int main(){
	int pin = 1234,enterpin;
	int balance=10000;
	int choice,amount;
	int i;
	printf("=====WELCOM TO ATM SYSTEM=====\n");
	printf("enter your pin:");
	scanf("%d",&enterpin);
	if(enterpin ==  pin){
	 for(i = 1 ; i<=10; i++)
	 {
	 printf("\n-----ATM MENU-----");
	 printf("\n1--cheak balance--:\n");
	 printf("\n2--withdraw mony--:\n");
	 printf("\n3--desposit mony--:\n");
	 printf("\n4--exite--:\n");
	 printf("enter choice:");
	 scanf("%d",&choice);
	 switch(choice){
	  case 1:
	 	  printf("your curent balance:",balance);
	 	  break;
	    case 2:
	 	  printf("enter emount to withdraw:");
	 	  scanf("%d",&amount);
	 	  if(amount <= balance)
	 	  {
	 	   balance = balance - amount;
	 	   printf("pleas collect your cash:");
	 	   printf("remaining balance:%d",balance);
		   }
		   else 
		   {
		    printf("insuficant balance:");
		    break;
		   }
		case 3:
			printf("enter amount to desposite:");
			scanf("%d\n",&amount);
			balance = balance + amount;
			printf("amount desposit successfully:\n");
			printf("update balance : %d\n",balance);
			break;
		case 4:
			printf("thank you for atm system:\n");
			return 0;
		default:
			printf("invalid choice! try again\n:");							 	 	 	
		 }
	  }        
   }
   else{
     printf("incorrect pin!access deniod:\n");
        }
	return 0;
}
