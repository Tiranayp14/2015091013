#include <stdio.h>

int main(){
	int input [5];
	int i, max = 0, min;
	
	printf("Program Menghitung Bilangan Terbesar dan Terkecil dari Lima Bilangan\n");
	printf("********************************************************************\n\n");
	
	for( i = 0; i < 5 ; i++){
		printf("Input 5 bilangan: ");
		scanf("%d",&input[i]);
	}
	
	for( i = 0; i < 5 ; i++){
		if(input[i] >= max){
			max = input[i];
		}	
	}
	min = max;
	for( i = 0; i < 5 ; i++){
		if(input[i] < min){
			min = input[i];
		}
	}
	printf("\n\nOutput: \n");
	printf("\t- Bilangan terbesar: %d\n", max);	
	printf("\t- Bilangan terkecil: %d\n", min);
	return 0;
}