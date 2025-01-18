#include<stdio.h>

void main(){

	char ch;

	printf("Enter the character : ");
	scanf("%c",&ch);

	if( ch >= 'A' && ch <= 'Z'){
		printf("Character is in the UPPERCASE\n",ch);
	}else if( ch >= 'a' && ch <= 'z'){
		printf("character is in the lowercase\n",ch);
	}else{

		printf("It is not alphabet\n",ch);
	}
	return 0;
}
