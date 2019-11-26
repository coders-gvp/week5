int fact(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
        f=f*i;
        return f;
}
int factorial_rec(int p)
{
    if(p==1)
    return 1;
    else
    return p*factorial_rec(p-1);
}
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;  
}
