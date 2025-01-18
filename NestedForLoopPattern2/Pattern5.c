#include<stdio.h>

void main(){

	
	
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
		int num1=1;
		int num2=4;
		for(int j=1; j<=rows; j++){
			if(i%2 != 0){
			printf("%d ",num1++);
			
		}else{
			printf("%d ",num2--);
		}
		}
		
		
		
		printf("\n");
	}
}


