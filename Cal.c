#include <stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

void main()
{
  int num1, num2, select;
  
  printf("num1 : ");
  scanf("%d",&num1);
  
  printf("num2 : ");
  scanf("%d",&num2);
  
  printf("1. add 2. sub 3. mul 4. div\nChoose : ");
  scanf("%d",&select);
  
  switch(select)
  {
    case 1:
      add(num1, num2);
      break;
    case 2:
      sub(num1, num2);
      break;
    case 3:
      mul(num1, num2);
      break;
    case 4:
      div(num1, num2);
      break;
    default:
      break;
  }
  
  return;
}

void add(int num1, int num2)
{
  printf("%d + %d = %d\n", num1, num2, num1 + num2);
  return ;
}

void sub(int num1, int num2)
{
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  return ;
}

void mul(int num1, int num2)
{
  printf("%d * %d = %d\n", num1, num2, num1 * num2);
  return ;
}

void div(int num1, int num2)
{
  if(num2 == 0)
  {
    printf("Can't Calculate");
  }else{
    printf("%d / %d = %.2f\n", num1, num2, (double)num1 / (double)num2);
  }
  return;
}
