#include<stdio.h>

int main(){

	int num;

	printf("Enter the number:\n");
	scanf("%d",&num);

	int fact=1;

	for(int i=1; i<=num; i++){
		fact *= i;
	}

	printf("Factorial of %d is %d\n",num,fact);
}
