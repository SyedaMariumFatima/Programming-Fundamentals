#include <stdio.h>
void thisFunctionCounts() {
	static int myVar;
	myVar++;
	if(myVar%10 == 0) {
		printf("myVar is: %d\n", myVar);
	}
}

int main() {
	for (int i = 0; i < 50; i++)
		thisFunctionCounts();
	return 0;
}

