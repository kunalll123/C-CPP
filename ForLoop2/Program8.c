#include<stdio.h>

void main(){

	printf("The given Series is: ");
	
	for(int i=1; i<=9; i++){
		if(i%2 != 0){
			printf("%d",i);
		}else{
			printf("%c",'A'+(i-1));
		}
	}
}
