#include<stdio.h>

void main(){

	float percent;

	printf("Enter the percents\n");
	scanf("%f",&percent);

	if(percent > 85){
		printf("Medical Field\n");
	}else if(percent > 75 && percent <=85){
		printf("Engineering Field\n");
	}else if(percent >= 65 && percent <=75){
		printf("Pharmacy or Bsc\n");
	}else{
		printf("Arts\n");
	}
}
