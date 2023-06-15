#include<stdio.h>

void array_element(int ar[], int sizeofarray) {
    printf("------------------------\n");
    printf("The 1st array element is\n");
    printf("ar[0]=%d\n", ar[0]);
}

int main() {
    int ar_1[5] = {1,2,3,4,5};
    float ar_2[] = {6.4,7.2,8.1,9.7,10.3};
    char chr[] = {'a','b','c','d','e',0};
    char str[] = "Hello Babes!";
    int ar_2d[][4] = {
        {11,12,13,14},
        {15,16,17,18}
    };
    char str_array[][20] = {
        "Hello cutu!",
        "How you doin??"
    };

    int i=0;
    int j=1;
    int k=2;

    printf("ar_1[%d]=%d\n", j, ar_1[j]);
    printf("ar_2[%d]=%.2f\n", k, ar_2[k]);
    printf("%s\n", chr);
    printf("%s\n", str);
    printf("ar_2d[%d][%d]=%d\n", j, i, ar_2d[j][i]);
    array_element(ar_1, 5);

}