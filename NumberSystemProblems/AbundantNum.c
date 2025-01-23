#include<stdio.h>

void main(){
	int sum,num=0;

	printf("Enter a number:\n");
	scanf("%d",&num);

	for(int i=1; i<num; i++){
		if(num%i == 0){
			sum += i;
		}
	}
	if(sum>num){
		printf("%d is an abundant number:\n",num);
	}else{
		printf("%d is not an abundant number:\n",num);
	}
}
