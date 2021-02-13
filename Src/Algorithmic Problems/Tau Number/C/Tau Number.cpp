#include<stdio.h>

int main() {
	
	int number,sum,counter;
	
	printf( "Enter a Number:" );
	scanf( "%d",&number );
	
	for(int i =1 ;i<= number; i++){
		if( number %i == 0 )
			counter++;
	}
	
	if( number%counter == 0 )
		printf("%d is Tau Number",number);
	else
		printf("%d is not Tau Number",number);
	
	return 0;
}
