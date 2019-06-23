#include<stdio.h>
#include<string.h>

//The below program converts capital into small and vice versa


int main(){
   char s[20];
   int l,i;
   printf("Enter a string");
   printf("\n");
   gets(s);
   printf("\n");
   l=strlen(s);
   for(i=0;i<l;i++)
   {
      if(s[i]>='a' && s[i]<='z')
      {
          s[i]=s[i]-32;
      }
      else if(s[i]>='A' && s[i]<='Z')
      {
          s[i]=s[i]+32;
      }
      else
      {
          s[i]=s[i];
      }
   }
   puts(s);
return 0;
}
