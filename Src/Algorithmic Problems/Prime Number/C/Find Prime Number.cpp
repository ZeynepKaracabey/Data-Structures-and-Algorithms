#include<stdio.h>

int main () {
	
	int number;
	
	printf( "Enter a number:");
	scanf( "%d",&number);
	
	if( number == 1 || number == 0 )
		printf( "%d is not prime number",number );
	
	else if ( number == 2 )
		printf( "%d is prime number",number);
		
	else {	
			
		for(int i =2; i < number ;i++) {
			
			if(number %i == 0){
				printf( "%d is not prime number",number);
				break;
			}
			else if(number %i != 0 &&  number-1 == i){
				printf( "%d is prime number",number); 
			}
					
		}
	
	}
		

	return 0;
}
