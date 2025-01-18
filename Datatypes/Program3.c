#include<stdio.h>

int main(){
	int x = 19;
	int ans = 0;

	printf("%d\n",x);
	printf("%d\n",ans);

	 ans = x++ + -x - x++;
	printf("%d\n",ans);

	
	ans = -x + x-- - x++ + ++x;
	printf("%d\n",ans);
	
}

