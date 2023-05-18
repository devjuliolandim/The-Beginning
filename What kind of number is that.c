#include <stdio.h>

int main(){

	int num;

	printf("Type any integer number\n");
	scanf("%d", &num);

	if(num>0){
	printf("Positive!\n");
	}else if(num<0){
	printf("Negative\n");
	}else{
	printf("Zero!\n");
	}


}
