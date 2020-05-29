/*
3
4
5
2
2
6
8
34
5
7
  2   2   4 
  5   5   6 
  7   8  34 

*/
#include<stdio.h>
int main()
{
  int n,a[20][20],b[40],i,j,k,temp;
  scanf("%d",&n);
  b[n*n];
  k=0;
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
   {scanf("%d",&a[i][j]);
    b[k++]=a[i][j];
   }
  }
  for(i=0;i<n*n;i++)
  {for(j=i+1;j<n*n;j++)
   {if(b[i]>b[j])
    {temp=b[i];
     b[i]=b[j];
     b[j]=temp;
    }
   }
  }
  k=0;
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
     a[i][j]=b[k++];
   for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
     printf("%3d ",a[i][j]);
    printf("\n");
   }
  printf("\n");
  return 0;
}
