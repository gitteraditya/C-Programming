#include<stdio.h>
int main(){
   int i,a[15],n,temp,k=0,m;

   printf("The program rotates the array");
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
   printf("for rotation of an array");
     printf("\n");
     k=0;
     printf("How many times u want to rotate the array?");
      printf("\n");
      scanf("%d",&m);
     while(k!=m){
        temp=a[n-1];
     for(i=n-1-1;i>=0;i--)
     {
         a[i+1]=a[i];
     }
     a[0]=temp;
     free(temp);
     k++;
     }
    for(i=0;i<n;i++){
      printf("%d",a[i]);
     }

   //new type

return 0;
}
