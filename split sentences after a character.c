#include<stdio.h>
#include<string.h>
int main()
{
   char a[10],ch;
   int i,k,l;
   printf("Enter a string:");
   printf("\n");
   gets(a);
   l=strlen(a);
   printf("Enter a character");
   printf("\n");
   scanf("%c",&ch);
   for (i=0;a[i]!='\0';i++)
     {
       if (ch==a[i])
       {
         printf("%d is the position",i+1);
         printf("\n");
         k=i+1;
         break;
       }
     }
     printf("%d",k);
     printf("\n");
     printf("First string is:");
    for(i=0;i<=k-1;i++)
    {
        printf("%c",a[i]);
        printf("\n");

    }
    printf("Second string is:");
      for(i=k;i<=l-1;i++)
    {

        printf("%c",a[i]);
        printf("\n");
    }
return 0;
}
