#include <stdio.h>
//arrays and functions
//when you pass an array to a function, the information about its size is lost
//so you need a variable containing its size to be passes along with it
void display1D(int arr[], int size) {
	for (int i = 0; i< size; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}


//to pass a 2D array, you do it pretty much the same way, but aside from a single set of [], 
//you have another one containing the number of columns in the 2D array
//following declaration means that the 2D array must have 5 columns, otherwise it will not accepted.
//so techincally we have no need for the argument "int cols" as we know columns will always be 5
void display2D(int arr[][5], int rows, int cols) {
	for (int i = 0; i< rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr1D[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};
	int arr1D_size5[5] = {1, 2, 3, 4, 5};
	//sending the array and the size of it to the function
	display1D(arr1D, sizeof(arr1D)/4);
	display1D(arr1D_size5, sizeof(arr1D_size5)/4);
	// what you're doing is that you're basically sending the address of the first index to the function.
	// because rememeber, the [] operator is used to dereference the indices

	int arr2d[10][5] ={0};
	int totalSize, numRow, numCol;
	totalSize = sizeof(arr2d)/4; // (size here is 200/4, so 50 total elements)
	numCol = sizeof(arr2d[0])/4; // (size of row 0. each row has elements = cols, so 20/4 = 5)
	numRow = totalSize/numCol; // (total elements = R x C, so R = total elements / C)
	
	display2D(arr2d, numRow, numCol);
	return 0;
}

