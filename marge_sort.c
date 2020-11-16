#include<stdio.h>
void marge(int a[],int);
void marge_non_recursine(int a[],int,int,int,int);

// display
void display(int a[],int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
  printf("%d \t",a[i]);
 }
 printf("\n");
}


// maarge
void marge(int a[],int n)
{
 int i,t,k,r1,r2,m,j;
 for(i=1;i<n-1;i=i+2)
 {
  if(a[i]>a[i+1])
  {
   t=a[i];
   a[i]=a[i+1];
   a[t+1]=t;
   printf("\n from the greaterno swapping: \n");
   display(a,i);
   printf("\n");
  }
 }
  for(k=2;k<=n-1;k=2*k)
  {
   for(i=1,j=k+1,m=1;m<n;i=i+2*k,j=j+2*k,m=m+2*k)
   {
    r1=i+k-1;
    r2=j+k-1;
    printf("\n form the upper of function call: \n");
    display(a,n);
    printf("\n");
    marge_non_recursine(a,i,r1,j,r2);        // a=array, i=low1, r1=up1, j=low2, r2=up2
   }
  }
 printf("\n form the end of marge \n");
 display(a,n);
 printf("\n");
}


// non recursine
void marge_non_recursine(int a[],int low1,int up1,int low2,int up2)
{
 int t[100];
 int p,q,k,i;
 p=low1,q=low2,i=1;
 while(p<=up1 && q<=up2)
 {
  if(a[p]<a[q])
  {
   t[i]=a[p];
   i++;
   p++;
  }
  else
  {
   t[i]=a[q];
   i++;
   q++;
  }
 }
 while(p<=up1)
 {
  t[i]=a[p];
  i++;
  p++;
 }
 while(q<=up2)
 {
  t[i]=a[q];
  i++;
  q++;
 }
 k=1;
 for(i=low1;i<=up2;i++)
 {
  a[k]=t[i];
  k++;
 }
}


// main
int main()
{
 int a[50];
 int n,i,z;
 printf("\n enter the nos of elements: \n");
 scanf("%d",&n);
 printf("enter the nos:\n");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
 display(a,n);
 printf("\n Merge sort start\n");
 marge(a,n);
 printf("\n Merge sort end \n");
 display(a,n);
 return(0);
}
