#include<stdio.h>

int main(){
	int num;
	int reversed=0;

	printf("Enter the number:\n");
	scanf("%d",&num);

	int temp=0;

	int originalNum=num;

	while(num!=0){
		temp=num%10;
		reversed=reversed*10+temp;
		num=num/10;
	}

	if(originalNum == reversed){
		printf("%d is a palindrome.\n",originalNum);
	}else{
		printf("%d is not a palindrome.\n",originalNum);
	}
}
