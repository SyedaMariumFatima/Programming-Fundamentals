#include <stdio.h>

int main() {
	// try value combinations 0-z, 1-o and 2-t to see everything work. 
	// can try random values too if you want!
	int numCode = 2;
	char letterCode = 't'; 
	
	//outer switch
	switch(numCode) {
		case 0:
			printf("This one was 0\n");
			//inner switch - nested within the outer switch
			//note how we use indentation for visual clarity
			// try removing and the indenation and notice how the code still works fine...
			//... but it's harder to see which switch is an inner switch
			switch (letterCode) {
				case 'z':
					printf("That one starts with 'z'\n");
					break;
				default:
					printf("That one doesn't start with 'z'\n");
			}
			break;
		case 1:
			printf("This one was 1\n");
			switch (letterCode) {
				case 'o':
					printf("That one starts with 'o'\n");
					break;
				default:
					printf("That one doesn't start with 'o'\n");
			}
			break;
		case 2:
			printf("This one was 2\n");
			switch (letterCode) {
				case 't':
					printf("That one starts with 't'\n");
					break;
				default:
					printf("That one doesn't start with 't'\n");
			}
			break;
			
		default:
			printf("Not 0, 1 or 2");
	}
	return 0;
}

