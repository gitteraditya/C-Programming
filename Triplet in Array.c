//The program is to check if m == a + b + c

//Example : 1 + 2 + 3 = 6 where 1,2,3 are elements of array.
#include<stdio.h>
int main(){
   int i,a[10],j,k,m,n,count[10];
      printf("The program check if there is triplet forming");
    printf("\n");
    printf("\n");
   printf("Enter the length of the array");
    printf("\n");
   scanf("%d",&n);
      printf("Enter the elements of the array");
    printf("\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("\n");
   printf("Enter a number whose sum you want to be");
   printf("\n");
   scanf("%d",&m);
   printf("\n");
   printf("The Triplets are:");
   for(i=0;i<n;i++)
   {
      for(j=i;j<n;j++)
      {
          for(k=j;k<n;k++)
          {
              if(i!=j && i!=k && j!=k)
              {
                 if(a[i]+a[j]+a[k]==m)
                 {
                    printf("%d + %d + %d = %d",a[i],a[j],a[k],m);
                    printf("\n");
                 }
              }

          }
      }
   }
return 0;
}
