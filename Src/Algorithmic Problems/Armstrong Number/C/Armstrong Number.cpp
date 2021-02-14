#include<stdio.h>
#include<math.h>

int main() {
	
	int originalNumber,copyNumber,isArmstrongNumber=0,remainder;
	
	printf( "Enter a Number:");
	scanf( "%d",&originalNumber);
	
	copyNumber = originalNumber;
	
	while( copyNumber != 0 ) {
		
		remainder = copyNumber%10; 
		isArmstrongNumber = isArmstrongNumber + (pow(remainder,3)); 
		copyNumber /= 10;
	} 
	
	if( originalNumber == isArmstrongNumber )
		printf( "%d is Armstrong number",originalNumber );
	else
		printf( "%d is not Armstrong number",originalNumber );
		
	
	return 0;
}
