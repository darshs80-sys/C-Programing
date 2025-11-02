#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  a,b,sum,sub,mul,div;
   printf("Enter any two integers:");
   scanf("%d%d",&a,&b);

   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;

   printf("Sum of two numbers =%d\n",sum);
   printf("Subtraction of two integers =%d\n",sub);
   printf("Multiplication of two integers =%d\n",mul);
   printf("Division of two integers =%d",div);

    return 0;
}
