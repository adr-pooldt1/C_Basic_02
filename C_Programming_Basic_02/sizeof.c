/*  C program to find size of variables using sizeof() operator  */

#include <stdio.h>

int main()
{

    char    a       ='A';
    int     b       =45;
    float   c       =345.0;
    double  d       =7654.90;
    char    str[]   ="Aditya Pawar";

    printf("Size of a: %d\n",sizeof(a));
    printf("\nSize of b: %d\n",sizeof(b));
    printf("\nSize of c: %d\n",sizeof(c));
    printf("\nSize of d: %d\n",sizeof(d));
    printf("\nSize of str: %d\n",sizeof(str));

    return 0;
}