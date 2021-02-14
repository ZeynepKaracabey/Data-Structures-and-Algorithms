#include<stdio.h>

int main () {
	
	int originalNumber,copyNumber,remainder,reversedNumber=0;
	
	printf( "Please Enter a Number:" );
	scanf( "%d",&originalNumber);
	
	copyNumber = originalNumber;
	
	while( copyNumber != 0 ) {
		
		remainder = copyNumber%10;
		reversedNumber = reversedNumber * 10 + remainder;
		copyNumber /= 10;
	}
	
	if( originalNumber == reversedNumber )
		printf( "%d is Palindrome Number",originalNumber );
	else
		printf( "%d is not Palindrome Number",originalNumber);
	
	
	return 0;
}
