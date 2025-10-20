#include<stdio.h>

int main()

{

    char cValue = 'S';
    int iValue = 56;
    float fValue = 19.55f;
    double dValue = 98.547855;

    printf("Size of Character is : %lu \n", sizeof(cValue));
    printf("Size of Integer is : %lu \n", sizeof(iValue));
    printf("Size of Float is : %lu \n", sizeof(fValue));
    printf("Size of Double is : %lu \n", sizeof(dValue));

    
    return 0;
}