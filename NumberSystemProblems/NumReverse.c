#include<stdio.h>

int main(){

	int num;
	int reversed=0;

	printf("Enter the number:\n");
	scanf("%d",&num);

	int temp=0;

	while(num!=0){
		temp=num%10;
		reversed=reversed*10+temp;

		num=num/10;
	}
	printf("Reverse of the number is %d\n",reversed);
}
