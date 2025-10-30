#include <stdio.h>

// this file will have all the valid ways to pass a 1D array to a function

//some prototypes -- definitions of these are after main
void method1 (int* arr, int size);
void method2 (int arr[], int size, int valToAssign);
void method3 (int arr[5], int size); 

int main() {
	
	int array[] = {0, 3, 4, 5, 6, 7, 10}; // array size is 7
	int s = sizeof(array)/4;
	int val = 91;
	
	printf("Orignal values:\n");	
	method1(array, s);
	
	printf("Setting %d to array\n", val);
	method2(array, s, val);
	
	printf("Updated values:\n");	
	method1(array, s);
	
	//notice that it doesn't validate the size of the array 
	//even if you specify arr[5] in the function declaration
	printf("Resetting values to 0\n");	
	method3(array, s);
	
	printf("Updated values:\n");	
	method1(array, s);
	
	return 0;
}

//let's say this method's job is to diplay the array
void method1 (int* arr, int size) {
	for (int i = 0; i < size; i++)
		printf ("%d ", arr[i]);
	printf("\n");
}

//let's say this method's job is to assign a given value to the array
void method2 (int arr[], int size, int valToAssign) {
	for (int i = 0; i < size; i++)
		arr[i] = valToAssign;
}

//let's say that this method's job is clear the values of the array
//notice that it doesn't validate the size of the array even if you specify arr[5]
void method3 (int arr[5], int size) {
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}
