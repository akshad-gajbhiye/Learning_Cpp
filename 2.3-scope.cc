#include<stdio.h>

int x = 100;

//Take x=20 in local scope
void scope1() {
    int x = 20;
    printf("Value of x in scope1 is = %d\n", x);
    return;
}

//Take x=100 in global scope. No local scope defined
void scope2() {
    printf("Value of x in scope2 is = %d\n", x);
    return;
}

//Take x=0 in local scope
int main() {
    int x = 0;
    printf("Value of x in main is = %d\n", x);
    scope1();
    scope2();

    return 0;
}