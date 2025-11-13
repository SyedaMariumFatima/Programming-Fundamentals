//code we did in class

#include<stdio.h>
void displayNames(char arr[3][3]);
void display1d(int *arr, int size);

int global[] = {1,3,5,7,9};

int* return1DArray() {
    return global;     
}

int main(){
    char names[3][3] = {
         {'t', 'i', 'm'},
         {'t', 'o', 'm'},
         {'b', 'o', 'b'}
         };
    int array[] = {1,3,5,6,7};   
         
    displayNames(names);
    display1d(array,sizeof(array)/4);
    
    int* globalArrayPtr = return1DArray();
    printf("%d",globalArrayPtr[3]); 
    getchar();
    return 0;    
}

void display1d(int *arr, int size) {
     for(int i=0; i<size; i++) {
     printf("%d",arr[i]);
     }
     printf("\n");
}

void displayNames(char arr[3][3]) {
     for(int i=0; i<3; i++) {
          for(int j=0; j<3; j++) {
                  printf("%c",arr[i][j]);        
          }
          printf("\n");
     }
     
}
