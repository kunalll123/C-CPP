#include<stdio.h>

int main(){

	int num=4;
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
	
		for(int j=1; j<=rows; j++){
			printf("%d ",num);
			num = num+4;
		}
		
		printf("\n");
	}
	
}


