#include<stdio.h>
int main(){
    int i,j,m,n,a[10][10],b[10][10],count=0;
    printf("Enter a number");
    printf("\n");
    scanf("%d",&m);
    printf("\n");
    printf("Enter 2 number");
    printf("\n");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the elements");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          scanf("%d",&a[i][j]);
       }
    }
        for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
         scanf("%d",&b[i][j]);
       }
    }

        for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
         if(a[i][j]==b[i][j])
         {
           count++;
         }
       }
    }
    printf("\n");
    if(count==m*n)
    {
      printf("The two matrices are identical");
    }
    else
        {
           printf("The two matrices are not identical");
        }
return 0;
}
