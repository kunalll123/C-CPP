#include<stdio.h>

void main(){

	int costPrice;
	int sellingPrice;

	printf("Enter the cost Price\n");
	scanf("%d",&costPrice);

	printf("Enter the selling price\n");
	scanf("%d",&sellingPrice);

	if(costPrice > sellingPrice){
		printf("Loss of %d\n",costPrice - sellingPrice);
	}
	else if(sellingPrice > costPrice){
		printf("Profit of %d\n",sellingPrice-costPrice);
	}else{
		printf("No Profit No Loss\n");
	}
}
