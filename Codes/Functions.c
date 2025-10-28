#include <stdio.h>

//function prototypes
//just the declaration of a function
// no function body
//ends with a semicolon

int prototype1(int num);
char prototype2(char ch, int i);
int prototype3(void);

//the functionality of prototypes can be defined anywhere outside main after their declaration
//like here
int prototype1(int num) {
	printf("Prototype 1 Body. Integer in the argument is %d\n", num);
	return num;
}

int main() {
	printf("About to call prototype 1\n");
	int res_p1 = prototype1(200);
	printf("After call to prototype 1. Res is: %d\n", res_p1);
	
	printf("\nAbout to call prototype 2\n");
	char res_p2 = prototype2('a', 2);
	printf("After call to prototype 2. Res is: %c\n", res_p2);
	
	printf("\nAbout to call prototype 3\n");
	int res_p3 = prototype3();
	printf("After call to prototype 3. Res is: %d\n", res_p3);
	
	return 0;
}

//can be defined here too, after main()
char prototype2(char ch, int i) {
	printf("Prototype 2 Body. Integer in the argument is %d\n Character is %c\n", i, ch);
	return ch + i;
}
//or here
int prototype3(void) {
	printf("Prototype 1 Body. Accepts no args\n");
	return 0;
}

