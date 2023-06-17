#include<iostream>
#include<string>
#define array_size 420 //One way of defining constants

void fnc() {
    const int x = 69; //Other way of defining cnstants
    std::cout << "The value of x is " << x << std::endl;
    return;
}

int main() {
    int ar[array_size];

    std::cout << "Array size: " << array_size << std::endl;
    fnc();
    return 0;
}