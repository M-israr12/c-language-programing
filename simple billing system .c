#include<stdio.h>
int main(){
   int i,n;
   float price ,total=0;
   int quantity;
   char item[20];
   printf("======simple bill system======\n");  
   printf("enter number of item:");
   scanf("%d",&n);
   	 for(i=1 ; i<=n;i++){
     printf("\n item %d name:",i);
     scanf(" %s",item);
     printf("enter quantity:");
     scanf("%d",&quantity);
     printf("enter price of one item:");
     scanf("%f",&price);
     total=total+(quantity*price);
   }
    printf("\n=========================");
    printf("\n         FINAL BILL");
    printf("\n=========================");
    printf("\n total amount = %.2f\n",total);
    printf("thank you for shoping!\n");	
	return 0;   
}
