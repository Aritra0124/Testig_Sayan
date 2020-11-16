#include<stdio.h>

struct data
{
 int row;
 int col;
 int val;
};





int main()
 {
  struct data a[50];
  struct data b[50];
  struct data c[100];
  int i,j,k,m,n;
  int sum;




  printf("enter the no of non-zero elements of M1:  \n");
  scanf("%d",&m);





  printf("enter the row column values of M1: \n");
  for(i=1;i<=m;i++)
  {
   scanf("%d%d%d",&a[i].row,&a[i].col,&a[i].val);
  }





  printf("enter the no of non-zero elementd of M2: \n");
  scanf("%d",&n);




  printf("enter the row column values of M2: \n");
  for(i=1;i<=n;i++)
  {
   scanf("%d%d%d",&b[i].row,&b[i].col,&b[i].val);
  }


  if(a[n].col!=b[m].row)
  {
   printf("matrix multiplication is not possible \n");
  }
  else
  {
   for(i=1;i<=m;i++)
   {
    for(k=1;k<=n;k++)
    {
     for(j=1;j<n;j++)
     {
      if(a[i].row==i)
      {
       c[i].row=i;
       if(b[k].col==j)
       {
        c[i].col=k;
        printf("k=%d\t",k);
        sum=a[i].val*b[j].val+sum;
       }
       c[i].val=sum;
       printf("j=%d \n",j);
       //c[i].col=k;
      }
     // c[i].col=k;
     }
    }
    printf("val: %d row %d col %d \n",c[i].val,c[i].row,c[i].col);
   }
  }




/*multiplication of matrix in 2d array */


 /* for(i=1;i<=m;i++)
  {
   for(k=1;k<=n;k++)
   {
    for(j=1;j<=n;j++)
    {
     sum=a[i][j]*b[j][k]+sum;
    }
      c[i][k]=sum;
      sum=0;
   }
  }*/






/* disply */



 for(i=1;i<=m;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(c[i].row==i && c[j].col==j)
   {
    printf("%d \t",c[i].val);
   }
   else
   printf("0 \t");
  }
  printf("\n");
 }
 return(0);
}
