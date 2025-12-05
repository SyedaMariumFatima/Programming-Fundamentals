#include <stdio.h>

//sum function without const arguments a and b
void sum_1(int* a, int* b, int* sum){
	*a = *a + *b;
	*sum = *a;
}

//sum function with const arguments a and b
void sum_2(const int* a, const int* b, int* sum){
	//*a = *a + *b; //will cause error - comment this out to run
	*sum = *a + *b;
}

int main() {
	//const int X; //will cause error - comment this out to run
	const int Y = 99;
	//Y = Y++; //will cause error - comment this out to run
	const char name[] = "Harry Potter";
	//name[0] = 'B'; //will cause error - comment this out to run
	
	
	
	//function calls for constant arguments example
	int a = 10, b = 99, sum = 0;
	sum_1(&a, &b, &sum);
	printf("Sum_1 Func: \na = %d, b = %d, sum = %d\n", a, b, sum);
	
	a = 10, b = 99, sum = 0; // fixing the values
	sum_2(&a, &b, &sum);
	printf("Sum_2 Func: \na = %d, b = %d, sum = %d", a, b, sum);
	
	
	
	//Non-Constant pointer to Non-Constant Data
	int ncData_1 = 10, ncData_2 = 20;
	int* ncPtr;
	
	ncPtr = &ncData_1;
	*ncPtr = 11; //changes value of ncData_1 from 10 to 11
	ncPtr = &ncData_2;
	*ncPtr = 22; //changes value of ncData_2 from 20 to 22
	
	
	
	//Non-Constant Pointer to Constant Data
	const int* ptrToconstInt;
	const int cInt_1 = 100, cInt_2 = 200;
	
	ptrToconstInt = &cInt_1;
	//*ptrToconstInt = 1; //will cause error - comment this out to run
	ptrToconstInt = &cInt_2;
	//*ptrToconstInt = 1; //will cause error - comment this out to run
	
	
	
	//Constant Pointer to Non-Constant Data
	int* const constPtrToNCInt = &ncData_1;
	*constPtrToNCInt = 2000; //will change value of ncData_1 to 2000
	//constPtrToNCInt = &ncData_2; //will cause error - comment this out to run
	
	
	
	//Constant Pointer to Constant Data
	const int* const constPtrToConstInt = &cInt_1;
	//constPtrToConstInt = &cInt_2; //will cause error - comment this out to run
	//*constPtrToConstInt = 99; //will cause error - comment this out to run
	
		
	return 0;
}

