#include<stdio.h>

//The below line tells the compiler that this function will be defined later and tells compiler about input and output
int square(int num);

//The below function prints the sum of squares
void sum_of_squares(int a, int b) {
    int sos = square(a) + square(b);
    printf("The sum of %d and %d is %d\n", a, b, sos);
    return;
}

//The below function returns the square of number
int square(int num) {
    int sq = num*num;
    return sq;
}

//The below function returns the square of a float
float square_float(float num) {
    return num*num;
}

int main() {
    int x = 20;
    int y = 30;
    float f = 1.3;

    int sq_x = square(x);
    printf("The square of %d is %d\n", x, sq_x);
    printf("The float of %0.2f is %.2f\n", f, square_float(f));
    sum_of_squares(x,y);
    sum_of_squares(x,x+5);

    return 0;
}