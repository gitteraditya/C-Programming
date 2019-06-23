//Add all the zeros to the end in an array
#include<stdio.h>
int main(){
   int i,j,c=0,count=0,n,m[10],a[10],b[10],temp;
   printf("The Program shift all the 0s to at he end of the number");
    printf("\n");
    printf("\n");
   printf("Enter the length of array");
    printf("\n");
   scanf("%d",&n);
   printf("Enter the elements of array");
    printf("\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]!=0)
       {
           b[count]=a[i];
           count++;
       }
       else
        {
           c++;
        }
   }

 printf("\n");
 printf("Only non zero elements");
       printf("\n");
        for(i=0;i<count;i++)
   {
       printf("%d",b[i]);
       printf("\n");
   }

         for(i=0;i<c;i++)
   {
       b[i+n]=0;
   }
printf("New array");
printf("\n");
         for(i=0;i<count+c;i++)
   {
       printf("%d",b[i]);
       printf("\n");
   }
   return 0;
}
