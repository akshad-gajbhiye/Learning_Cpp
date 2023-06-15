#include <iostream>
#include <string>

int sum_for(int ar[], int sum_upto) {
    int i = 0;
    int sum = 0;
    std::cout << "Using For Loop" << std::endl;
    for (i=0 ; i<sum_upto ; i++) {
        sum += ar[i];
        std::cout << "The value of i is " << i << ", Parial Sum: " << sum << std::endl;
    }
    std::cout << "Sum using For Loop: " << sum << std::endl;
    return sum;
}

int sum_while(int ar[], int sum_upto) {
    int i = 0;
    int sum = 0;
    std::cout << "Using While Loop" << std::endl;
    while (i<sum_upto) {
        sum += ar[i];
        std::cout << "The value of i is " << i << ", Parial Sum: " << sum << std::endl;
        i++;
    }
    std::cout << "Sum using While Loop: " << sum << std::endl;
    return sum;
}

int sum_do(int ar[], int sum_upto) {
    int i = 0;
    int sum = 0;
    std::cout << "Using Do-While Loop" << std::endl;
    do {
        sum += ar[i];
        std::cout << "The value of i is " << i << ", Parial Sum: " << sum << std::endl;
        i++;
    } while (i<sum_upto);
    std::cout << "Sum using Do-While Loop: " << sum << std::endl;
    return sum;
}

int main() {
  int num_array[] = {10,20,30,40,50};
  int sum_upto = 0;
  sum_for(num_array, sum_upto);
  sum_while(num_array, sum_upto);
  sum_do(num_array, sum_upto);
}