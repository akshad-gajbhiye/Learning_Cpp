#include<stdio.h>

int main()
{
    float float1, float2;
    int p, q=20;
    char ch='h';
    
    p = q * 2;
    p++;
    float1 = p;
    float2 = float1/2;
    printf("Value of p: %d\nValue of float2: %0.2f\nValue of character: %c\n", p, float2, ch);

}