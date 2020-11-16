#include<stdio.h>
void shell_sort(int a[],int n)
{
 int m,i,j,t;
 for(m=n/2;m>0;m=m/2)
 {
  for(j=m;j<=n-1;j++)
  {

   for(i=j-m+1;i>=0;i=i-m)
   {
    if(a[i+m]>=a[i])
     break;
    else
    {
     t=a[i];
     a[i]=a[i+m];
     a[i+m]=t;
    }
   }
  }
 }
}




int main()
{
 int a[50];
 int x,y,z;
 printf("enter the no of elements: \n");
 scanf("%d",&x);
 for(y=1;y<=x;y++)
 {
  printf("enter the nos: \n");
  scanf("%d",&a[y]);
 }
 shell_sort(a,x);
 for(z=1;z<=x;z++)
 {
  printf("the sorted list is  %d\n",a[z]);
 }
 return(0);
}
