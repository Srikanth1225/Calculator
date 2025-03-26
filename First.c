#include<stdio.h>
void mul(int n1, int n2)
{
return n1*n2;
}
void  division(int n1, int n2)
{
return n1/n2;
}
int main()
{
  int num1, num2, res;
  printf("Enter first number: );
  scanf("%d",&num1);
  printf("Enter second number: );
  scanf("%d",&num2);
  res=mul(num1,num2);
  printf("The multiplication of %d and %d is %d",num1,num2,res);
  res=division(num1,num2);
  printf("The division of %d and %d is %d",num1,num2,res);
 
  return 0;
}
