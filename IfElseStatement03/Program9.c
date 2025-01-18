#include<stdio.h>

void main(){

	int side1;
	int side2;
	int side3;

	printf("Enter side 1:\n");
	scanf("%d",&side1);

	printf("Enter side 2:\n");
	scanf("%d",&side2);

	printf("Enter side 3:\n");
	scanf("%d",&side3);

	if(side1 * side1 + side2 * side2 == side3 * side3){
		printf("It is a pythagorean triplet\n");
	}else if(side1*side1 + side3*side3 == side2 * side2){
		printf("It is a pythagorean triplet\n");
	}else if(side2*side2 + side3*side3 == side1*side1){
		printf("It is a pythagorean triplet\n");
	}else{
		printf("It is not pythagorean triplet\n");
	}
}
