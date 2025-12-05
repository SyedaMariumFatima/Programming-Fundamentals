#include <stdio.h>
#include <stdlib.h>

int main() {
    float f = 7.9;
    double d = 9.99;
    int a=10;
    a = (int)d;
    f = (float)d;
    printf("%d, %f", a, f);
    
    char integerValAsString[20];
    itoa(a, integerValAsString, 10); // the 10 here means decimal value (base 10)
    printf("\nConverted to String: %s", integerValAsString);
    
    char intAsCharArray[] = "91021";
    int convInt = atoi(intAsCharArray);
    printf("\nConverted to Integer: %d", convInt);

    return 0;
}
