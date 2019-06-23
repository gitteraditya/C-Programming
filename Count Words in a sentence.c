#include<stdio.h>
#include<string.h>
int main(){
    char s[30];
    int i,l,c=0,d;
    printf("Enter a string");
    printf("\n");
    gets(s);
    printf("\n");
    l=strlen(s);
    for(i=0;i<l;i++)
    {
       if(s[i]==' ' && s[i+1]!=' ')
       {
         c++;
       }
    }
    d=c+1;
    printf("\n");
    printf("No. of words are %d",d);
return 0;
}
