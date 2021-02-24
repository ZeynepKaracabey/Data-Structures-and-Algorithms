/* Chorent Number */
#include<stdio.h>
int main(){
	
	int number,number2,copynumber,copynumber2,remainder=0,sum=0,remainder2=0,sum2=0;
	
	printf("enter first number:");
	scanf("%d",&number);
	
	printf("enter second number:");
	scanf("%d",&number2);
	
	copynumber=number;
	copynumber2=number2;
	
	if( number>9 && number<99 && number2>9 && number2<99 ){
		
		while( copynumber != 0 ){
			remainder=copynumber%10;
			sum=remainder;
			break;
		}
		
		while( copynumber2 != 0 ){
			remainder2=copynumber2%10;
			sum2=remainder2;
			break;
		}
		
	}
	
	if( sum+sum2 == 10 && number/10 == number2/10 ){
		printf("%d and %d chorent number",number,number2);
	}
	
	else{
		printf("%d and %d is not chorent number",number,number2);
	}
	
	return 0;
}
