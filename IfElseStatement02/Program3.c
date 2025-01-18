#include<stdio.h>

int main(){

	int num;

	printf("Enter the number: ");
	scanf("%d",&num);

	if(num % 7 == 0 ){
		if(num > 21){
		printf("Number is divisible by 7 and greater than 21\n");
	}else if(num < 21){
		printf("Number is divisible by 7 and less than 21\n");
	}else{
		printf("Number is equal to 7\n");
	}
	}else{
		printf("Number is not divisible by 7\n");
	}

	return 0;
}
