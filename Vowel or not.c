#include<stdio.h>
int main(){
   int s;
   char k;
   printf("Program checks if the character is vowel or not");//To check vowel or not ?
   printf("\n");
   printf("\n");
   printf("Enter a character");//To check vowel or not ?
   printf("\n");
   scanf("%c",&k);
   printf("\n");
      if(k=='A' ||  k== 'E'||  k== 'I'||  k== 'O'||  k== 'U'||  k== 'a'||  k== 'e'||  k== 'i'||  k== 'o'||  k== 'u')
     {
       printf("Vowel");
     }
     else
    {
      printf("Consonant");
    }
return 0;
}
