#include <stdio.h>

float sum (float arr[], int size) {
	float sum;
	for (int i = 0; i< size; i++)
		sum +=arr[i];
	return sum;

}

float average(float arr[], int size) {
	float avg = sum(arr, size)/size;
	return avg;

}

int main() {
	float myArr[] = {1,2,3,4,5,6,7,8,9,9.5};
	printf("%.2f", average(myArr, 10));
	
	return 0;
}

