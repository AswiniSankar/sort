#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
  char s[20];
  scanf("%s",s);
  for(i=0;i<(strlen(s));i++)
  {for(j=i+1;j<strlen(s);j++)
   {if(s[i]>s[j])
     {s[i]=s[i]+s[j];
      s[j]=s[i]-s[j];
      s[i]=s[i]-s[j];
     }
   }
  }
  printf("%s",s);
  printf("\n");
  return 0;
}
