#include<stdio.h>

int main() {
    int cs220 = 50;

/*
&& - and operation
|| - or operation
! - not operation
*/
    if (cs220>90) {     //if there are more than 2 statements then use braces for making a block of code
        printf("A Grade");
        printf("\tCongratulations");
    } else if ((cs220>80) && (cs220<=90)) {
        printf("B Grade");
        printf("Little more effort required");
    } else if ((cs220>70) && (cs220<=80))       //if there is only one command, you dont need to use braces
        printf("C Grade");
      else if ((cs220>60) && (cs220<=70)) {
        printf("D Grade");
        printf("Little more effort required");
    } else if ((cs220>50) && (cs220<=60)) 
        printf("E Grade");
    else
        printf("You gotta work damn hard!!");
    
    printf("\n");

    if (!(cs220 > 50))
        printf("You failed the course");
    else
        printf("You passed the course");

    printf("\n");
}