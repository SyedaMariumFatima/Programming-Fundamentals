#include <stdio.h>
#include <stdlib.h>

int main() {
	int rows = 4, cols = 3;
	
	int * arr = (int*)malloc(rows*cols * sizeof(int));
	
	//initializing the array
	for (int i=0; i < rows; i++) {
		
		for (int j = 0; j < cols; j++) {
			int index = i*cols + j;
			arr[index] = i*cols;
		}
	}
	
	//printing the array
	for (int i = 0; i < rows; i++) {
		
		for (int j = 0; j < cols; j++) {
			printf("%d  ", arr[(i*cols) + j]);
		}
		printf("\n");
	}
	
	return 0;
}

