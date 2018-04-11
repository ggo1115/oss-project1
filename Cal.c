#include <stdio.h>

void add(num1, num2);

void main()
{
  double num1, num2;
  
  printf("num1 : ");
  scanf("%lf",&num1);
  
  printf("num2 : ");
  scanf("%lf",&num2);
  
}

void add(num1, num2)
{
  printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
  return ;
}

void sub(num1, num2)
{
  printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
  return ;
}

void mul(num1, num2)
{
  printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
  return ;
}
