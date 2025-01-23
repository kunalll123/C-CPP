#include<stdio.h>

void main(){
	int num;

	printf("Enter a number:\n");
	scanf("%d",&num);

	int originalNum = num;
	int rem=0;

	while(num!=0){
		if(rem==0){
			printf("%d is a duck number.\n",originalNum);
			break;
		}
		num = num/10;
	}
}
