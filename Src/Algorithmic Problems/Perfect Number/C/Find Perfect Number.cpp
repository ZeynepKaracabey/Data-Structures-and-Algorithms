#include<stdio.h>

int main () {
	
	int number;
	int sum;
	
	printf( "Enter a Number:" );
	scanf( "%d",&number);
	
	for(int i = 1; i < number; i++){
		
		if( number %i == 0 ) 
			sum += i;
	}
	
	if(number == sum)
		printf( "%d is Perfect Number",number );
	else
		printf( "%d is not Perfect Number",number );
	
	
	return 0;
}
