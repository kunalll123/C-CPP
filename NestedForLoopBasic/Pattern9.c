
#include<stdio.h>

void main(){

	//char ch='D';
	
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
	char ch='D';
	
		for(int j=1; j<=rows; j++){
			printf("%c ",ch--);
		}
		
		printf("\n");
	}
}

