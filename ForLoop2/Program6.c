#include<stdio.h>

int main(){

	int num;

	printf("Enter the non-negative number: ");
	scanf("%d",&num);

	if(num < 0){
		printf("Enter non-negative number: ");
	}

	if(num%2 == 0){
		for(int i=1; i<=10; i++){
			printf("%d * %d = %d\n",num,i,num*i);
		}
	}else {
		for(int i=10; i>=1; i--){
			printf("%d * %d = %d\n",num,i,num*i);
		}
	}
}


