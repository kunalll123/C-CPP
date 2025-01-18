#include<stdio.h>

int main(){

	int num;

	printf("Enter the number between the range is 10 to 1000\n");
	scanf("%d",&num);

	if(num <= 100 && num >= 1){
		printf("%d is in the range 1 to 1000\n",num);
	}else{
		printf("%d is not in the range 1 to 1000\n",num);
	}
	return 0;
}
