#include <stdio.h>

int factorial (int num) {
	if (num == 1) {
		return 1;
	} else {
		return num*factorial(num-1);
	}
}

int fibonacci(int num) {
	if (num == 1) {					//base case for 1st term
		return 0;
	} else if (num == 2) {			//base case for 2nd term
		return 1;
	} else {
		return fibonacci(num-1) + fibonacci(num-2);		//recursive call with 2 preceding terms
	}

}

void printFibonacci(int n, int a, int b) {
    if (n == 0)
        return ;

    printf("%d ", a);                 // print current term
    printFibonacci(n - 1, b, a + b);  // recursive call with next terms
}

void hanoi (int num, char src, char dest, char temp){

	if (num == 0) {
		return;
	} else {
	
		hanoi(num-1, src, temp, dest);
		printf ("Move disk %d from %c to %c\n", num, src, dest);
		hanoi(num-1, dest, temp, src);
	}

}

int main() {
	//Calling Factorial Function
	printf("Factorial: %d\n", factorial(5));
	
	//Printing the nth term in a Fibonacci Series
	printf ("5th term in the Fibonacci series: %d\n", fibonacci(5));
	
	//Print all terms in the Fibonacci series until nth term, provided by the user.
	int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci sequence: ");
    printFibonacci(terms, 0, 1);      // start with 0, 1 
    printf("\n");

	//towers of Hanoi
	char src = 'A', dest = 'B', temp = 'C';
	int numdisks = 3;
	
	printf("Solving Towers of Hanoi Problem:\n");
	hanoi (numdisks, src, dest, temp);	
	
	return 0;
}

