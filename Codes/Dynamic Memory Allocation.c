#include <stdio.h>
#include <stdlib.h>

int main() {
	//malloc
	int *ptr = (int*) malloc(sizeof(int));
	printf ("INT Memory allocated at: %d", ptr);
	
	*ptr = 15; //store 15 on the allocated block
	printf("\nValue at *ptr: %d", *ptr); // fetch value that *ptr is pointing to
	
	float *arr = (float*) malloc(100*sizeof(float));
	printf ("\nFLOAT Memory allocated at: %d\n", arr);
	
	for (int i = 0; i < 100; i++){
		printf("%f  ", arr[i]);
		if(i%10==9)
			printf("\n");
	}
	
	//calloc
	int *i_arr = (int*) calloc (100, sizeof(int));
	printf ("\nINT Memory CAllocated at: %d\n", i_arr);
	
	for (int i = 0; i < 100; i++){
		printf("%d\t", i_arr[i]);
		if(i%10==9)
			printf("\n");
	}
	
	float *f_arr = (float*) calloc (100, sizeof(float));
	printf ("\nFLOAT Memory CAllocated at: %d", f_arr);
	
	//realloc
	int *temp = (int*) realloc (ptr, 10*sizeof(int));
	if(temp != NULL) 
		ptr = temp;
	printf ("\nINT Memory RE-Allocated at: %d", ptr);
	
	float *temp_ = (float*) realloc (f_arr, 10*sizeof(float));
	if(temp_ != NULL) 
		f_arr = temp_;
	printf ("\nFLOAT Memory RE-Allocated at: %d", f_arr);



}

