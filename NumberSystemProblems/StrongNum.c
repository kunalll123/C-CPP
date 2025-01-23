#include<stdio.h>

void main(){

	int num;
	int sum=0,temp,digit,fact;

	printf("Enter the number:\n");
	scanf("%d",&num);

	temp = num;

	while(temp != 0){
		digit = temp % 10;
		fact = 1;

		for(int i=1; i<=digit; i++){
			fact *= i;
		}

		sum += fact;
		temp /= 10;
	}

	if(sum == num){
		printf("%d is a strong number.\n",num);
	}else{
		printf("%d is not a strong number.\n",num);
	}
}
