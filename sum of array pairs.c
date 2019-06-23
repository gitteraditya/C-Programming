#include<stdio.h>
int main(){
   int i,a[10],n,p,m,b[10],j,c[10],k;
   printf("Enter the length of the array");//Input number
    printf("\n");
   scanf("%d",&n);
      printf("Enter the elements of array");//Input number
    printf("\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);//taking input of elements in array
   }
   printf("for sum of arrays");
     printf("\n");
     printf("Enter the required number who should be the sum");
       printf("\n");
          printf("For example: for number 4 => (1 and 3) are pairs or (2 and 2)");
       printf("\n");

       scanf("%d",&k);
       printf("\n");
    for(i=0;i<n;i++)
       {
         for(j=i;j<n;j++){
            if(i!=j)
            {
               if(a[i]+a[j]==k) //applying condition for pairing
               {
                 printf("%d and %d are the pairs",a[i],a[j]);
               }
            }
         }
       }
        printf("\n");
return 0;
}
