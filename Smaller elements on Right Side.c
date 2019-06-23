int main(){
   int i,a[10],j,n,count[10];
   printf("Enter the length of array you want");
    printf("\n");
   scanf("%d",&n);
    printf("Enter the elements of array");
    printf("\n");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
    printf("\n");
      for(i=0;i<n;i++){
         count[i]=0;
         for(j=i;j<n;j++)
         {
            if(i!=j)
            {
               if(a[i]>a[j])
               {
                  count[i]++;
               }
               else
               {
                  count[i]=count[i];
               }
            }
         }
   }
   printf("The Smaller elements sequence wise are");
    printf("\n");
   for(i=0;i<n;i++)
   {
      printf("%d",count[i]);
       printf("\n");
   }
   return 0;
   }
