#include<stdio.h>
int fact(int);
int main()
{
int x,J,i;
printf("Enter a number");
scanf("%d",&x);
for(i=0;i<=x-1;i++)
{
    for(J=0;J<x-i-1;J++)
    printf(" ");
    for(J=0;J<=i;J++)
    printf(" %d",fact(i)/(fact(i-J)*fact(J)));
    printf("\n");
}
}
int fact(int p)
{
    if(p==0)
    return 1;
    else
    return p*fact(p-1);
}