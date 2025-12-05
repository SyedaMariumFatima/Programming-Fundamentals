#include <stdio.h>
int main() {
	int a=19;
	char b='k';
	double c=1234.1234;
	float d=4.56;
	void *ptr=NULL;
	ptr = &a;
	printf("Value = %d, Address = %d\n", *(int *)ptr, ptr);
	ptr = &b;
	printf("Value = %c, Address = %d\n", *(char *)ptr, ptr);
	ptr = &c;
	printf("Value = %lf, Address = %d\n", *(double *)ptr, ptr);
	ptr = &d;
	printf("Value = %f, Address = %d\n", *(float *)ptr, ptr);
	return 0;
}
