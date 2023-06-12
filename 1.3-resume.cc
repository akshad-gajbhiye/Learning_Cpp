#include<stdio.h>

int main()
{
    char gender = 'M';
    int cs101 = 9;
    int cs102 = 8;
    int me102 = 9;
    int bio101 = 9;
    float sum = cs101 + cs102 + me102 + bio101;
    float cpi = sum/4;

    printf("Name: Akshad Vivek Gajbhiye\n");
    printf("Gender: %c", gender);
    printf("\n----------------------------------------");
    printf("\n----------------Marksheet---------------");
    printf("\n----------------------------------------");    
    printf("\nIntroduction to computing:\t %d", cs101);
    printf("\nSoftware tools:\t\t\t %d", cs102);
    printf("\nEngineering Drawing:\t\t %d", me102);
    printf("\nIntroductory Biogoly:\t\t %d", bio101);
    printf("\n----------------------------------------");    
    printf("\nCPI:\t\t\t\t %0.2f", cpi);
    printf("\n----------------------------------------\n");
}