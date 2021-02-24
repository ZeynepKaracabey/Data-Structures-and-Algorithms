#include<stdio.h>

int main() {
	
	int m,n,sum=0,sum2=0;
	
	printf( "enter m:" );
	scanf( "%d",&m );
	
	printf( "enter n:" );
	scanf( "%d",&n );
	
	for( int i=1;i<m;i++ ){
		
		if( m%i==0 )
			sum+=i;
		
	}
	
	for ( int a=1;a<n;a++ ){
		
		if( n%a==0 )
			sum2+=a;
			
	}
	
	if( sum==n && sum2==m )
		printf( "%d and %d friend number",m,n );
	
	else
		printf( "%d and %d not friend number",m,n );
	
	return 0;
}
