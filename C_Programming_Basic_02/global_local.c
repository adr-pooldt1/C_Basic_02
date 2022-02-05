/*Variables defined outside a function are […] called global variables.

Variables defined within a function are local variables.

A local variable is a variable which is either a variable declared within the function or is an argument passed to a function.

A global variable (DEF) is a variable which is accessible in multiple scopes.  It is important to note that global variables are only accessible after they have been declared.*/
/*  C program to demonstrate example of global and local scope  */

#include <stdio.h>
 
int a=10;       //global variable
 
int fun();
 
int main()
{
  int a=20;  /*local to main*/
  int b=30;  /*local to main*/
 
  printf("In main()  a=%d, b=%d\n",a,b);
  fun();
  printf("In main() after calling fun() ~ b=%d\n",b);
  return 0;
}
 
int fun()
{
  int b=40;  /*local to fun*/
 
  printf("In fun()  a= %d\n", a);
  printf("In fun()  b= %d\n", b);
}