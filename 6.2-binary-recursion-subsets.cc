#include<iostream>
#include<string>
using namespace std;

void print_subset(int ar[], int info[], int ar_size) {
    int bool_not_empty = 0;
    for (int i = 0; i < ar_size; i++) {
        if (info[i] == 1) {
            cout << ar[i] << ", ";
            bool_not_empty = 1;
        }
    }
    if (bool_not_empty == 0) {
        cout << "Empty";
    }
    cout << endl;
}

void subsets(int ar[], int ar_size, int ar_beg, int info[]) {

    if (ar_beg == ar_size){
        print_subset(ar, info, ar_size);
        return;
    }

    info[ar_beg] = 0;
    subsets(ar, ar_size, ar_beg+1, info);
    info[ar_beg] = 1;
    subsets(ar, ar_size, ar_beg+1, info);
}

int main() {
    const int ar_size = 4;
    int info[ar_size];
    int ar[ar_size] = {1,2,3,4};
    subsets(ar, ar_size, 0, info);
}