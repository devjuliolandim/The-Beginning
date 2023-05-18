#include <stdio.h>

int main(){

	int fnum, lnum, some=0;
	
	printf("Type the first number\n");
	scanf("%d", &fnum);
	
	printf("Type the last number\n");
	scanf("%d", &lnum);

	int index = 0;
	
	for(index=fnum; index<=lnum; index++){
	some += index;
	
	
	}
	
	printf("Some: %d\n", some);
	
}
