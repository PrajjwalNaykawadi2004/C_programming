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

    printf("Address of cValue is %d\n", &cValue);
    printf("Address of iValue is %d\n", &iValue);
    printf("Address of fValue is %d\n", &fValue);
    printf("Address of dValue is %d\n", &dValue);

    
    return 0;
}