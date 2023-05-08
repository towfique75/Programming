#include <stdio.h>
int main()
{
    int r,n,temp,sum=0;
    //r=remainder
    //n=input
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}