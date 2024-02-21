#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter 2 numbers");
    scanf("%f%f", &a, &b);
    c = a/b;
    printf("\nThe value is : %f", c);
    return 0;
}