#include <stdio.h>

void myFunction() {
	printf("This is My Function\n");
}

char* getUniName(){
	return "FAST-NUCES";
}

int calculateSum (int a, int b) {
	return a+b;
}

int calculateDifference (int a, int b) {
	return a-b;
}

//example of a function being used as callback function 
//"operation" is the function pointer that can point to calculateSum OR calculateDifference

void performOperation (int a, int b, int (*operation)(int,int)) {
	int result = (*operation)(a, b);
    printf("Result: %d\n", result);
}

int main() {
	void (*ptr1)(); // the function pointer for myFunction
	
	ptr1 = &myFunction;
	(*ptr1)();
	
	char* (*ptr2)(); // the function pointer for getUniName 
	
	ptr2 = &getUniName;
	printf("%s\n",(*ptr2)());
	
	int (*ptr3)(int,int); // the function pointer for calculateSum
	
	ptr3 = &calculateSum; 
	printf("Sum is: %d\n", ptr3(3,4));
	
	//calling the performOperation
	// Pass the 'calculateSum' function as a callback
    performOperation(5, 3, &calculateSum);

    // Pass the 'calculateDifference' function as a callback
    performOperation(5, 3, &calculateDifference);
	
	return 0;
}

