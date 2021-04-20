#include <stdio.h>

void main()
{
int i,j,n;
printf("enter no.");
scanf("%d",&n);
int a[(n*2)+1];
for(i=0;i<(n*2)+1;i++)
a[i]=0;
for(i=1;i<=n;i++)
{
      for(j=1;j<n+i;j++)
      {
           if(i+j>n && (((n%2!=0)&&(i+j)%2==0)||(n%2==0&&(i+j)%2!=0)))
           { 
              a[j]=a[j-1]+a[j+1];
              if(a[j]==0)
                a[j]=1;
              printf("%d",a[j]);
              a [j-1]=0;
            }
            else
            printf(" ");
       }
printf("\n");
}
}
+
