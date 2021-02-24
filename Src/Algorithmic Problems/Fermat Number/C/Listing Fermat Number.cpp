#include<stdio.h>
#include <math.h>

int main () {
	
	int counter;
	int fermatNumber;
	
	printf("Enter A Counter:");
	scanf("%d",&counter);
	
	printf( "Fermat Numbers:" );
	
	for( int i = 0; i <= counter; i++) {
		
		fermatNumber = pow(2,pow(2,i))+1;
		printf("%d\t",fermatNumber);
		
	}
	
	
	return 0;
	
}
