#include<stdio.h>

int main()
{
  int a,b;
  char op;

  while(1)
{
  printf("Enter an operator(+,-,*,/):");
  scanf(" %c",&op);

  switch(op)
{
   case'+':
       printf("Enter two numbers: ");
       scanf("%d %d",&a,&b);
       printf("Result=%d\n",a+b);
       break;
   case'-':
       printf("Enter two numbers: ");
       scanf("%d %d",&a,&b);
       printf("Result=%d\n",a-b);
       break;
  case'*':
       printf("Enter two numbers: ");
       scanf("%d %d",&a,&b);
       printf("Result=%d\n",a*b);
       break;
  case'/':
       printf("Enter two numbers: ");
       scanf("%d %d",&a,&b);
       if(b!=0)
          printf("Result=%.2f\n",(float)a/b);
       else
          printf("Division by zero is not possible.\n");
       break;
default:
       printf("INVALID OPERATOR.CALCULATOR STOPPED.\n");
       return 0;
}
}
return 0;
}



       
