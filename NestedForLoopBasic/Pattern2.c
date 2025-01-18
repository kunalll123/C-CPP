#include<stdio.h>

int main(){

	int num =1;
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=num; i<=rows; i++){
		for(int j=num; j<=rows; j++){
			printf("%d  ",num);
		}
		printf("\n");
	}
	
}
