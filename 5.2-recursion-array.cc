#include<iostream>
#include<string>
using namespace std;

int array_sum(int ar[], int array_size) {
    int sum = 0;
    if (array_size == 0) return 0;

    sum = array_sum(ar, array_size - 1);
    return (sum + ar[array_size - 1]);
}

void print_array(int ar[], int array_size) {
    cout << "Array: ";
    for(int i = 0; i < array_size; i++) {
        cout << ar[i] << " ";
    }
    return;
}

int main() {
    int sum;
    const int ar_size=5;
    int array_test[ar_size] = {1,2,3,4,5};
    sum = array_sum(array_test, ar_size);
    cout << endl << "The sum of ";
    print_array(array_test, ar_size);
    cout << "is " << sum << endl;
}