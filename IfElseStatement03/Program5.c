#include<stdio.h>

int main(){

	int units;
	float bill;

	printf("Enter the bill units:\n");
	scanf("%d",&units);

	if (units <= 100){
		bill = units * 5;
	}else if(units <= 300){
		bill =(100*5) + ((units - 100)*7);
	}else{
		bill=(100*5)+(200*7)+((units-300)*10);
	}
	printf("The electricity bill for %d is:$%f\n",units,bill);
}
