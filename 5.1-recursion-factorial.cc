#include<iostream>
#include<string>
using namespace std;

int fnc_fact(int n) {
    int x = 0;
    if ((n==0) || (n==1)) return 1;     //Base Step

    x = fnc_fact(n-1);                  //Recursive Step
    return (x*n);
}

int main() {
    int fact;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    fact = fnc_fact(num);
    cout << endl << "The factorial of " << num << " is " << fact << endl;
}

/*
How to check if your recursive function is correct??
    1. Is the base case correct??
    2. Is there a reduction value/size of input parameters in the recursive step??
    3. Is the function totally correct?
        a. Assume function is correct in recursive step.
        b. Use this assumption and verify return of function is correct.
*/