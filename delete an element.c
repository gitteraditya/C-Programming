#include<stdio.h>
int main(){
   int i,n,a[10],m,p,j,k,temp;
   printf("Enter the length of array");
   printf("\n");
   printf("\n");
   scanf("%d",&n);
   printf("Enter the elements of the array");
      printf("\n");
   printf("\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("Enter the number to be deleted from array");
   printf("\n");
   printf("\n");
   scanf("%d",&m);
   for(i=0;i<n;i++){
      if(a[i]==m){
         p=i;
         printf("%d is the position of the number to be deleted",i+1);
         printf("\n");
      }
   }
   temp=a[p];
   for(j=p;j<=n-1;j++){
      a[j]=a[j+1];
   }
    for(k=0;k<n-1;k++){
      printf("%d",a[k]);
      printf("\n");
   }
return 0;
}
