#include<stdio.h>

int main(){

	int num;
	int sum=0;

	printf("Enter the number:\n");
	scanf("%d",&num);

	for(int i=1; i<num; i++){
		if(num%i==0){
			sum += i;
		}
	}

	if(sum == num){
		printf("%d is a perfect number.\n",num);
	}else{
		printf("%d is not a perfect number.\n",num);
	}
}
