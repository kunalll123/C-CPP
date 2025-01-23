//Deficient Number

#include<stdio.h>

void main(){
	int num,sum=0;

	printf("Enter the number:\n");
	scanf("%d",&num);


	for(int i=1; i<num; i++){
		if(num%i == 0){
			sum += i;
		}
	}

	if(sum < num){
		printf("%d is a deficient Number.\n",num);
	}else{
		printf("%d is not a Defiecient Number.\n",num);
	}
}
