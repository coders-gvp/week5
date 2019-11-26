#include<stdio.h>
void lcm(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    lcm(a,b);
}
void lcm(int x,int y)
{
    int i,gcd,lm;
    if((x!=0)&&(y!=0))
    {
      for(i=1;i<=x&&i<=y;i++)
     {
       if((x%i==0)&&(y%i==0))
       gcd=i;
     }
      lm=(x*y)/gcd;
      printf("\nThe LCM of %d and %d is %d",x,y,lm);
    }
    else
    printf("LCM is Undefined");
}
