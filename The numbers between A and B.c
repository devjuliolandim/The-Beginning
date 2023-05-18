#include <stdio.h>

int main(){
	int A, B;
	printf("Type a value for A\n");
	scanf("%d", &A);

	printf("Type a value for B\n");
	scanf("%d", &B);

	int bigger, lower;

	if(A>B){
	bigger = A;
	lower = B;
	}else if(A<B){
	bigger = B;
	lower = A;
	}


	int index= 0;
	
	
	printf("\nThe numbers between A and B are:\n");
	
	for(index = lower + 1; index< bigger; index ++){
	
	printf("%d\n", index);
	
	}


}
