#include<stdio.h>
int main(){
   int i,a[10],n,j,s=0,d=0,f=0;
   printf("Program segregate 1,2 and 0 so enter only 1,2,0 in random order ");
    printf("\n");
     printf("\n");
   printf("Enter the length of array");
    printf("\n");
   scanf("%d",&n);
   printf("Enter the elements of array");
    printf("\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(j=0;j<n;j++)
   {
      if(a[j]==0)
      {
         s++;
      }
   }
    for(j=0;j<n;j++)
   {
      if(a[j]==1)
      {
         d++;
      }
   }
    for(j=0;j<n;j++)
   {
      if(a[j]==2 )
      {
         f++;
      }
   }
   printf("%d %d %d ",s,d,f);
   printf("\n");
   free(a[10]);
   for(j=0;j<s;j++)
   {
       a[j]=0;
   }
     for(j=s;j<s+d;j++)
   {
       a[j]=1;
   }
     for(j=s+d;j<f+s+d;j++)
   {
       a[j]=2;
   }
      for(j=0;j<n;j++)
   {
       printf("%d",a[j]);
   }
return 0;
}
