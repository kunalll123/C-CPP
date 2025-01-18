#include<stdio.h>

void main(){

	

	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
		int num=4;
		for(int j=1; j<=rows; j++){
			printf("%d ",num--);
		}
		printf("\n");
	}
}

