/*  C program to convert feet to inches  */

#include<stdio.h>

int main()
{
                float feet,inches;
                
                printf("Enter the value of feet: ");
                scanf("%f",&feet);
                
                //converting into inches
                inches=feet*12;
                
                printf("\nTotal inches will be: %f\n",inches);
                return 0;
}