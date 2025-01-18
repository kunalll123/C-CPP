#include<stdio.h>

int main(){

	int num1;
	int num2;

	printf("Enter the numbers");
	scanf("%d%d",&num1,&num2);

	if(num1==num2){
		printf("Numbers are equal");
	}else if(num1 > num2){
		printf("%d is maximum between %d and %d\n",num1,num1,num2);
	}else{
		printf("%d is maximum between %d and %d\n",num2,num1,num2);
	}
	return 0;
}


