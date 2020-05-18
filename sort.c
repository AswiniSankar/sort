//bubble sort
#include<stdio.h>
int main()
{
 int n,a[50],i,j,temp;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {
   for(j=0;j<n-1-i;j++)
   {if(a[j]>a[j+1])
     {temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }
   }
 }
 for(i=0;i<n;i++)
    printf("%d ",a[i]);
 printf("\n");
 return 0;
}
//selection sort
#include<stdio.h>
int main()
{
 int n,a[50],i,j,temp,min;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {  min=i;
   for(j=i+1;j<n;j++)
   {if(a[min]>a[j])
     {
        min=j;
     }
     
   }
     temp=a[i];
      a[i]=a[min];
      a[min]=temp;
 }
 for(i=0;i<n;i++)
    printf("%d ",a[i]);
 printf("\n");
 return 0;
}
//insertion sort
#include<stdio.h>
int main()
{
 int n,a[50],i,j,temp,min;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {  min=a[i];
    j=i-1;
     while(j>=0 && a[j]>min)
     {
         a[j+1]=a[j];
         j=j-1;
     }
   a[j+1]=min;
 }
 for(i=0;i<n;i++)
    printf("%d ",a[i]);
 printf("\n");
 return 0;
}
