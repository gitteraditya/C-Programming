#include<stdio.h>

//The program checks below 1st letter is capital or not

int main(){
   int s;
   char k;
   printf("Enter a character");
   printf("\n");
   scanf("%c",&k);
   int m=k;
   printf("%d",m);
   printf("\n");
      if('A'<=k && k<='Z')
     {
       printf("Capital");
     }
     else
    {
      printf("Not capital");
    }
return 0;
}
