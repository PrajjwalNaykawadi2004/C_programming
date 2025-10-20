#include<stdio.h>

int main()

{

    int Arr[]={11,21,51,101,111};

    int *p = NULL;
    int *q = NULL ;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Data fetched by P is : %d\n", *p);
    printf("Data fetched by q is : %d\n", *q);

    p++;
    q--;

    printf("Data fetches by P is : %d\n", *p);
    printf("Data fetched by q is : %d\n", *q);
    
    return 0;
}