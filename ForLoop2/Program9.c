#include<stdio.h>

void main(){

	char ch1='a';
	char ch2='B';

	printf("The given seris is : ");

	for(int i=1; i<=5; i++){
		printf("%c%c",ch1,ch2);
		ch1 =ch1+2;
		ch2= ch2+2;
	}
}
