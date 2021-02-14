#include<stdio.h>

int main() {
	
	int number,factorialNumber=1;
	
	printf("Enter a Positive Number :");
	scanf( "%d",&number);
	
	for( int i=1; i<=number; i++ )
		factorialNumber *= i;
		
	printf( "%d!=%d",number,factorialNumber);
		
	return 0;
}
