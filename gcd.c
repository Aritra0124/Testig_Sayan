#include<stdio.h>
int gcd(int a,int b)
{
int r;
r=a%b;
if(r==0)
return b;
else
return(gcd(b,r));
}

int main()
{
int a,b,r;
printf("enter the nos:\n");
scanf("%d%d",&a,&b);
r=gcd(a,b);
printf("%d\n",r);
return 0;
}
