#include <stdio.h>

int main() {

	//array of 5 integers
	int arrInt[5];
	
	//assigning values to elements by index
	arrInt[0] = 0; 
	arrInt[1] = 1;
	arrInt[2] = 2;
	arrInt[3] = 3;
	arrInt[4] = 4;
	
	//printing elements
	printf("%d, %d, %d, %d, %d", arrInt[0],arrInt[1],arrInt[2],arrInt[3],arrInt[4]);
	//what if you print just arrInt?
	printf("\nJust arrInt: %d \n", arrInt); 
	//what you see in the address in memory where it is being stored!
	
	//can also initialize values when declaring an array by doing this:
	int declareAndInit[5] = {10,13,22,53,47};
	
	//can access a user desired index by using variables between []
	// [] is known as the subscript operator or the index operator
	int index; //user will provide this
	
	printf("What index would you like to access? Type here: ");
	scanf("%d", &index);
	
	printf("The value at index %d is: %d", index, declareAndInit[index]);
	
	for (int i=1; i<=5; i++) {
		arrInt[i] = i;
	}
	
	//sum of all elements of an array:
	
	int sum = 0;
	
	for (i = 0; i<5; i++) {
		sum += arrInt[i];
	}
	printf("The sum of all elements of the array is: %d\n", sum);

	return 0;
}

