#include<stdio.h>

void main(){

	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
		int num=1;
		char ch='B';
		for(int j=1; j<=rows; j++){
			if(j%2 != 0){
				printf("%d ",num);
				num += 2;
			}else{
				printf("%c ",ch);
				ch += 2;
			}
		}
		printf("\n");
	}
}
