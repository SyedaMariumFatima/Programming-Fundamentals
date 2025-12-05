#include <stdio.h>
#include <stdlib.h>

int main() {
	char AGuy = 'A';
	char* AGuyWhoKnowsAGuy = &AGuy;
	char** IKnow = &AGuyWhoKnowsAGuy;
	
	printf ("AGuy and its address: %c, %d\n", AGuy, &AGuy );
	printf ("AGuyWhoKnowsAGuy and its address: %d, %d\n", AGuyWhoKnowsAGuy, &AGuyWhoKnowsAGuy );
	printf ("IKnow and its address: %d, %d\n", IKnow, &IKnow );
	
	//fetching values from double pointers
	printf ("IKnow: %c, AGuyWhoKnowsAGuy: %c, AGuy: %c.",**IKnow, *AGuyWhoKnowsAGuy, AGuy);
	
	
	//allocating a 2D-Array of RxC dimensions
	int R = 3, C = 4;
	
	//First create a double pointer - this would be pointing to the 2D array
	int** my2dArr;
	
	//Then allocate R double pointers which will serve as pointer to each row
	my2dArr = (int**) malloc(R*sizeof(int*));
	if (my2dArr == NULL) {
        printf("Memory allocation failed for rows.\n");
        return 1;
    }
	
	//Then for each row, allocate C columns that would be pointing to an integer block.
	for (int i = 0; i < R; i++){
		my2dArrd[i] = (int*) malloc (C*sizeof(int));
		if (my2dArr[i] == NULL) {
        	printf("Memory allocation failed for col %d.\n", i+1);
        	for (int j = 0; j < i; j++)
        		free(my2dArrp[j]);
        	free(my2dArr);
        	return 1;
    	}	
    }
	
	}
	

	return 0;
}

