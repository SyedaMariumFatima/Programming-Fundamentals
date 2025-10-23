#include <stdio.h>

//these two vars are outside the body of any function
//thus, they are global
int globalInt = 0;
char globalChar = 'c';

int main() {
    //these two variable to local to the main() method
    //I can use them anywhere in the main() method.
    int localInt = 10;
    char localChar = 'e';
    
    
    if(localInt == 10) {
        //this var is local to this if block
        int localToIf = 20;
        localToIf = localInt; //we're using localInt here because it's available herne
        localToIf = globalInt; // can use globalInt here because it's available anywhere
    } else {
        //this var is local to this else block
        int localToElse = 30;
        localToElse = localInt; //can use localInt here too
        localToElse = globalInt; // can use globalInt too
        //following line will generate an error- uncomment to see the error
        //localToElse = localToIf;
    }
    for (int forVar = 0; forVar < 5; forVar++){
		//can access forVar here, globalInt and localInt, but not the vars from if or else
		forVar = localInt;
	}
	while (globalInt) { //can use globalInt here
		int whileVar = globalInt; // can use globalInt here too
		whileVar = localInt; //can use localInt here too
		//can't use the other vars here that are local to if, else or for
		//uncomment the following lines to see
		//localToIf = 10;
		//localToElse = 10;
		//forVar = 10;
		break;
	}
	do {
		int doVar = globalInt; // can use globalInt here too
		doVar = localInt; //can use localInt here too
		//can't use the other vars here that are local to if, else, for or while
		//uncomment the following lines to see
		//localToIf = 10;
		//localToElse = 10;
		//forVar = 10;
		//whileVar = 10;
		break;
	} while(globalInt); //can use globalInt here
    
    return 0;
}

void aRandomFunction() {
	//this var can only be used in this function, and not in main
	int localToThisFunction;
	//can't used local variables from main in here either
	//uncomment the following to see the errors
	//localInt = 100;
	//localChar = 'z';
}
