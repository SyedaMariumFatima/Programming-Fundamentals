#include <stdio.h>

int main() {
	//Ternary Operator
	int a = -10, b = -20, c;

	// Let's say we have this if-else statement
	if (a < b)
	    c = a;
	else
	    c = b;

	// You can map this to a single line instead of 4 lines, using the ternary operator!
	//(condition) ? (variable = Expression2) : (variable = Expression3);
	(a < b) ? c = a :  c = b;
	
	//alternatively you can also do this and acheive the same result:
	//variable = (condition) ? Expression2 : Expression3;
	c = (a < b) ? a : b;
	printf("%d\n",c);
	
	//	variable = Expression1 ? Expression2 : Expression3;
	c = (a + b) ? printf("%d",a) : printf("%d",b);
	
	//Sooo.... What's this gonna print?
	printf("\n%d\n",c);


	//Nested Ternary Operators for the Leap-Year Problem	
	int year = 100;
	
	year % 4 == 0 ? 
		year % 100 == 0 ? 
			year % 400 == 0 ? printf("%d is a Leap Year\n", year)
			: printf("%d is not a Leap Year\n", year)
		: printf("%d is a Leap Year\n", year)
	: printf("%d is not a Leap Year\n", year);


	// SWITCH CASES
	
	int i = 0;
	char myChar = 'c';
	switch (i) {
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		default:
			printf("idk man\n");
			
	}
	return 0;
}

