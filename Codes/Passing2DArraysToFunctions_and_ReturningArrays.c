#include <stdio.h>

// passing by using pointers
void accept2DArray(int (*arr)[3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

// passing without using pointers - num of rows not specified
void accept2DArray_1(int arr[][3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

// passing without using pointers - num of rows specified
// doesn't matter whether it is specified or not
// try changing 
void accept2DArray_2(int arr[3][3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

// a global 1D integer array
int arr_1d[10] = {1,2,3,4,5,6,7,8,9,0};

//since you cannot return an actual array in c, you have to return the address of the first element instead
int* returnArray() {
	return arr_1d;
}

// a global 2D integer array
int arr_2d [3][3] = { 
	{1,0,3},
	{4,0,6},
	{7,0,9}
	};

//since you cannot return an actual array in c, you have to return the address of the first element instead	
int* returnArray_2d_1() {
	return &arr_2d[0][0];
}

// or you can return a pointer to an array of 3 integers
// this may look spooky, so try sticking to the method above, if it's confusing
int (*returnArray_2d_2())[3] {
	return arr_2d;
}


int main() {
	//edit the following declaration to arr[2][3] to test out accept2DArray_2(int arr[3][3], int row, int col)
	int arr [3][3] = { {1,2,3},
	{4,5,6},
	//try commenting out the line below for accept2DArray_2(int arr[3][3], int row, int col)
	{7,8,9}
	};

	accept2DArray(arr, 3, 3);
	accept2DArray_1(arr, 3, 3);
	accept2DArray_2(arr, 3, 3);
	
	int* arr_r = returnArray();
	for (int j = 0; j < 10; j++) {
		printf("%d ", arr_r[j]);
	}
	printf("\n");
	
	int (*arr_r2d_1)[3] = returnArray_2d_1();
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr_r2d_1[i][j]);
		}
		printf("\n");
	}
	
	int (*arr_r2d_2)[3] = returnArray_2d_2();
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr_r2d_2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

