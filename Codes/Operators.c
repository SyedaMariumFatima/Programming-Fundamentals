#include <stdio.h>
#include <stdbool.h>


int main() {

	int a = 10, b = 5;
	
	//arithmetic opertors
	int sum = a + b;
	int diff = a - b;
	int quo = a / b;
	int prod = a * b;
	int rem = a % b;
	
	//assigment operators
	a = b; // move value of b into a
	a += b; // equivalent to a = a + b
	a -= b; // equivalent to a = a - b
	a *= b; // equivalent to a = a * b
	a /= b; // equivalent to a = a / b
	a %= b; // equivalent to a = a % b
	
	
	a = 5; b = 10;
	//post-increment/decrement
	int c = a++;
	int d = b--;
	
	printf("%d, %d, %d, %d\n", c, d, a, b);
	
	//pre-increment/decrement
	c = ++a;
	d = --b;
	
	printf("%d, %d, %d, %d\n", c, d, a, b);
	
	//relational operators
	
	bool trueOrFalse; // a Boolean(bool) can hold only 0(false) or 1(true)
	
	trueOrFalse = a == b;
	printf("a==b = %d\n",trueOrFalse);
	
	trueOrFalse = a >= b;
	printf("a>=b = %d\n",trueOrFalse);
	
	trueOrFalse = a <= b;
	printf("a<=b = %d\n",trueOrFalse);
	
	trueOrFalse = a != b;
	printf("a!=b = %d\n",trueOrFalse);
	
	trueOrFalse = a > b;
	printf("a>b = %d\n",trueOrFalse);
	
	trueOrFalse = a < b;
	printf("a<b = %d\n",trueOrFalse);
	
	
	//bit-wise operators
	//Truth Table for AND, OR and XOR
	//	X 	Y	&	|	^
	//	0	0	0	0	0
	//	0	1	0	1	1
	//	1	0	0	1	1
	//	1	1	1	1	0
	
	// a = 5 (00000101 in 8-bit binary) 
    // b = 9 (00001001 in 8-bit binary)
    a = 5, b = 9;

    // The result is 00000001 (1 in decimal)
    printf("a&b = %d\n", a & b);

    // The result is 00001101 (13 in decimal)
    printf("a|b = %d\n", a | b);

    // The result is 00001100 (12 in decimal)
    printf("a^b = %d\n", a ^ b);
	
	// Bit-wise NOT - Inverts all the bits
	// one integer is 4 bytes or 32 bits
	// each bit contains 0 or 1
	unsigned int uint = 5;
	printf("~uint = %u\n", ~uint);
	//in case of a normal integer, it will be a little different (applies 2's complement)
	printf("~a = %d\n", ~a);
	
	//shift operators
	// The result is 00010010 (18 in decimal)
    printf("b<<1 = %u\n", b << 1);

    // The result is 00000100 (4 in decimal)
    printf("b>>1 = %u\n", b >> 1);
	
	return 0;
}

