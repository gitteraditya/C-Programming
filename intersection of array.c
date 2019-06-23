#include<stdio.h>
int main(){
   int i,a[10],n,p,m,b[10],j,c[10];
   printf("Program find common numbers from the two arrays");
    printf("\n");
    printf("\n");
    printf("Enter the length of 1st array");
    printf("\n");
   scanf("%d",&n);
   printf("Enter the elements of 1st array");
    printf("\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("\n");
    printf("Enter the length of 2nd array");
    printf("\n");
   scanf("%d",&m);
    printf("\n");
    printf("Enter the elements of 2nd array");
    printf("\n");
   for(j=0;j<n;j++){
      scanf("%d",&b[j]);
   }
    printf("\n");
 printf("The common numbers are");
    printf("\n");
    printf("\n");
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(a[i]==b[j]){
             printf("%d",a[i]);
           }
       }
    }
return 0;
}
