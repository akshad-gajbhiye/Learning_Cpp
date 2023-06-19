#include<iostream>
#include<string>
using namespace std;

int fibonacci(int num) {
    if ((num == 1) || (num == 2)) return 1;
    return fibonacci(num-1)+fibonacci(num-2);
}
int main() {
    int x = 7;
    cout << "The " << x << "th number of fibonacci sequence is " << fibonacci(x) << endl;
}
