#include<stdio.h>

int main(){

	int age;

	printf("Enter the age of the student: ");
	scanf("%d",&age);

	if(age >= 18){
		printf("Eligible for voting\n");
	}else{
		printf("Not eligible for voting\n");
	}
}
