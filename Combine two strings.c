#include<stdio.h>
#include<string.h>
int main(){
    int i,l,f;
    char s[30],g[30];
    printf("The program combines two strings");
    printf("\n");
    printf("\n");
    printf("Enter 1st string");
    gets(s);
    printf("\n");
    printf("Enter 2nd string");
    gets(g);
     printf("\n");
    l=strlen(s);
    f=strlen(g);
    for(i=0;i<f;i++)
    {
       s[l+i]=g[i];
    }
    s[l+f]='\0';
    printf("The combined string is");
    printf("\n");
    printf("\n");
    puts(s);
return 0;
}
