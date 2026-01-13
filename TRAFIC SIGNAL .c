#include<stdio.h>
int main(){
	char signal;
	// infinit loop 
	while(1){
	 printf("ENTER TRAFIC SIGNAL (R , Y, G)OR Q quite:");
	 scanf(" %c",&signal);
	 if(signal == 'Q' || signal == 'q'){
		printf("excitin trafic signal program.\n");
		 break;
    	}
      switch(signal){
      	case 'R':
      	case 'r':
      		printf("STOF!\n");
      		 break;
      	case 'Y':
      	case 'y':
      	    printf("READY!\n");
      	      break;
      	case 'G':
      	case 'g':
      	    printf("GO!\n");
      	     break;
      	default :
      		printf("INVALID SIGNAL!\n");
	  }  
    	printf("\n");
   	}
	
	
	
	
	return 0;
}
