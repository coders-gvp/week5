#include<stdio.h>
#include"week53.h"
void main()
{
int x;
printf("Enter a number\n");
scanf("%d",&x);
printf("The factorial of %d without recursion is %d\n",x,fact(x));
printf("The factorial of %d with recursion is %d\n",x,factorial_rec(x));
if(prime(x)==1)
printf("%d is a prime number",x);
else
printf("%d is not a prime number",x);
}
