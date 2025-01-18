#include<stdio.h>

void main(){
	
	int num=1;
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	
	for(int i=1; i<=rows; i++){
	char ch='a';
		for(int j=1; j<=rows; j++){

			printf("%c%d ",ch++,num);
			
		}
		printf("\n");
	}
}
