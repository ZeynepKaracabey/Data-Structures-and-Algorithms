#include<stdio.h>

int main() {
	
	int OriginalNumber,CopyNumber,FactorialNumber=1,Remainder=0,Factorion=0;
	
	printf( "enter original number: " );
	scanf( "%d",& OriginalNumber );
	
	CopyNumber = OriginalNumber;
	
	while ( CopyNumber!=0 ){
		
		Remainder = CopyNumber%10;
		
		for( int i=1;i<=Remainder;i++ )
			FactorialNumber *=i;
			
		Factorion = Factorion+FactorialNumber;
		CopyNumber/=10;
		FactorialNumber = 1;
	}
	if( OriginalNumber==Factorion )
		printf( "%d factorion is the number.",OriginalNumber );
	
	else
		printf( "%d factorion is not a number.",OriginalNumber );
	
	return 0;
}
