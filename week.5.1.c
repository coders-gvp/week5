#include<stdio.h>
void sum();
void sum1(int,int);
int sum2();
int sum3(int,int);
void main()
{
    int a,b,m,n;
    sum();
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    sum1(a,b);
    printf("the sum with return type and has no arguments list is %d\n",sum2());
    printf("enter values of m ,n");
    scanf("%d%d",&m,&n);
    printf("the sum with return type and arguments is %d\n",sum3(m,n));

}
void sum()
{
    int num1,num2;
    printf("enter num1,num2");
    scanf("%d%d",&num1,&num2);
    printf("the sum with no return type and no argument is %d\n",num1+num2);

}
void sum1(int x,int y)
{
    printf("the sum with no return type and argument is %d\n",x+y);

}
int sum2()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return(a+b);
}
int sum3(int m,int n)
{
    return(m+n);
}