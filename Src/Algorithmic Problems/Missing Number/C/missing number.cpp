/* Missing Number */
#include<stdio.h>
int main(){
	
	int number,sum=0;
	
	printf( "enter a number:" );
	scanf( "%d",&number );
	
	for( int i=1; i<=number; i++ ){
		if( number%i == 0 )
			sum+=i;
	}
	
	if( sum < number*2){
		printf("%d is missing number",number);
	}
	
	else{
		printf("%d is not missing number",number);
	}
	
	return 0;
}
