#include<stdio.h>

int main(){

	int start;
	int end;
	int sum=0;

	printf("Enter the start number: ");
	scanf("%d",&start);

	printf("Enter the end number: ");
	scanf("%d",&end);

	
	for(int i=start; i<=end; i++){
		sum = sum+i;
		
	}
	printf("Sum of all numbers from %d to %d is:%d\n ",start,end,sum);
	return 0;
}
