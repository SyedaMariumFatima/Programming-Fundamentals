#include <stdio.h>

int main () {
	char arr[10];
	
	//accessing individual elements
	//scanf("%c", &arr[0]);
	printf("%c\n", arr[0]);
	
	//unlike with numeric array, with a character array 
	//we can take a whole string of characters as input
	//scanf("%s", arr);
	printf("%s, %d\n", arr, sizeof(arr));
	
	//you can declare and initialize strings at the same time:
	char uni[] = "FAST"; //note how we didn't specify a size here
	printf("%s, %d\n", uni, sizeof(uni));
	//hmm... did you notice something?
	//the size says 5 even though we have 4 characters in our string
	//string terminator is the 5th character! Even though you don't see it!
	
	//for the following we're forcefully not using a string terminator
	//it may or not result in undefined behavior
	//try running it, if you're lucky you might see stuff that's not a part of the string
	char name[] = {'Y','o','u','r',' ','n','a','m','e',' ','h','e','r','e'};
	printf("%s, %d\n", name, sizeof(name));
	char name2[] = {'Y','o','u','r',' ','n','a','m','e'};
	printf("%s, %d\n", name2, sizeof(name2));
	
	//to fix that you must have a string terminator at the end of the string
	char name3[] = {'Y','o','u','r',' ','n','a','m','e','\0'};
	printf("%s, %d\n", name3, sizeof(name3));
	
}
