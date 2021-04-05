#include "header.h"

int *computer(int page_data){
	int temp, i;
	int *result = (int *)calloc(10, sizeof(int));
	
	for(i=1; i<=page_data; i++){
		temp = i;
		while(temp){
			result[temp%10]++;
			temp /= 10;
		}
	}
	
	return result;
}
