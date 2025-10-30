// Online C compiler to run C program online
#include <stdio.h>
int calculate(int* a, int *b, char c) {
    (*a)++;
    switch (c) {
        case '+':
            return (*a)+(*b);
        case '-':
            return (*a)-(*b);
        case '*':
            return (*a)*(*b);
        case '/':
            return (*a)/(*b);
        default:
            printf("Invalid Operation\n");
            return 0;
    }
}
int main() {
    int a = 5, b = 2;
    int result = calculate(&a,&b,'/');
    printf("%d, %d, %d",a,b,result);
    //type casting
    float f = (float)a/(float)b;
    printf("\n%f",f);
    
    return 0;
}