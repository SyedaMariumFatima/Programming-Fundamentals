#include <stdio.h>

int main() {
//---------------------------------------------	
// Truthy and Falsy Values
//---------------------------------------------	
	int zero = 0; //falsy value
	int non_zero = 10; //truthy value
	
	char empty_char = '\0'; // falsy
	char non_empty_char = 'A'; //truthy
	
	if (zero) {
		printf("This doesn't work\n");
	}
	
	if (non_zero) {
		printf("Whoa, this works (int)\n");
	}
	
	if (empty_char) {
		printf("This doesn't work\n");
	}
	
	if (non_empty_char) {
		printf("Whoa, this works (char)\n");
	}
	
	int a = 10, b = 0, c;
	
	
	//what is this??
	//the assignment statements assign a value but they also "return" the assigned value 
	//and can be used in a print statements, or the if statements as such.
	
	printf ("%d\n", c = a); //truthy statement because the value being assigned is non-zero
	printf ("%d\n", c = b); //falsy statement because the value being assigned is zero
	
	if ( c = a)
		printf("Whoa, this works (assignment to a non-zero number)\n");
		
	if ( c = b)
		printf("This doesn't work\n");
//---------------------------------------------
// If Conditions
//---------------------------------------------

	a = 10, b = 20, c = -10;

	if ( a == 10) {
		printf("a is 10!\n");
	}
	
	if ( b > a ) {
		printf("b is greater than a!\n");
	}
	
	if ( c < a ) {
		printf("c is less than a!\n");
	}


//---------------------------------------------
// If-Else Conditions
//---------------------------------------------
	if ( a > b) {
		printf("a is greater than b\n");
	} else  if (b > c) {
		printf("b is greater than a and c\n");
	}
	
//---------------------------------------------
// If-Else If-Else Conditions
//---------------------------------------------

	a = 10, b = 20, c = 30;
	if ( a > b) {
		printf("a is greater than b\n");
	} else  if (b > c) {
		printf("b is greater than a and c\n");
	} else {
		printf("c is greater than a and b\n");
	}
//---------------------------------------------
// Nested If-Else Conditions
//---------------------------------------------
/*
Question: (courtesy of ChatGPT)
You are tasked with writing a program that determines whether a given year is a leap year or not. 
A leap year is a special year in the calendar that has 366 days instead of 365, with February having 29 days. 
The rule for deciding leap years is as follows:

A year is a leap year if it is divisible by 4.

However, if the year is also divisible by 100, then it is not a leap year.

But if the year is divisible by 400, then it is a leap year.

Your program should take a year as input from the user and display whether it is a leap year or not.

===========================================================
So the logic can be thought of as a decision tree:

> Check divisibility by 4. If no ? not leap year.

> If divisible by 4, check divisibility by 100.

	> If not divisible by 100 ? leap year.

	> If divisible by 100, check divisibility by 400.

		> If divisible by 400 ? leap year.

		> If not divisible by 400 ? not a leap year.
*/

	int year;
    printf("Enter year: ");
    scanf("%d",&year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a Leap Year\n", year);
            } else {
               printf("%d is not a Leap Year\n", year);
            }
        } else {
            printf("%d is a Leap Year\n", year);
        }
    } else {
        printf("%d is not a Leap Year\n", year);
    }

	return 0;
}

