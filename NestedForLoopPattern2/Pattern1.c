#include<stdio.h>

void main(){

	char ch='A';

	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
		for(int j=1; j<=rows; j++){
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
