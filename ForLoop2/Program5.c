#include<stdio.h>

int main(){

	int start;
	int end;

	int prod = 1;

	printf("Enter the start number: ");
	scanf("%d",&start);

	printf("Enter the end number: ");
	scanf("%d",&end);

	for(int i = start; i<=end; i++){
		if(i%2 == 0){
			prod = prod*i;
		}
	}
	printf("Product of the even numbers from %d to %d is %d",start,end,prod);
}
