/* C Program to find out the sum of first n numbers */

#include<stdio.h>

int main()
{
  int i=0,num,sum=0;
  printf("Enter a number :: ");
  scanf("%d",&num);
  for(;i<=num;i++)
  {
  sum=sum+i;
  }
  printf("\n The sum of numbers = %d",sum);

  return 0;
}