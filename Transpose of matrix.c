#include<stdio.h>
int main(){
    int i,temp,j,m,n,a[10][10],b[10][10],count=0;
    printf("Below Program gives transpose of matrix");
    printf("\n");
    printf("Enter a the row");
    printf("\n");
    scanf("%d",&m);
    printf("\n");
    printf("Enter the column");
    printf("\n");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the elements of the matrix");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)  //Scanning the matrix
       {
          scanf("%d ",&a[i][j]);
          printf("\n");
       }
    }
    printf("Before transpose");
    printf("\n");
      for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("The transpose of the matrix is:");
    printf("\n");
       for(i=0;i<m;i++)//Printing Transpose of matrix
    {
       for(j=0;j<n;j++)
       {
          printf("%d ",a[j][i]);
       }
       printf("\n");
    }
return 0;
}
