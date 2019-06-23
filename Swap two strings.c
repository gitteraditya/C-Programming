#include<stdio.h>
#include<string.h>

//Below Program swaps two strings

int main(){
    char s[20],g[20],temp[20];
    printf("Enter the 1st string");
    printf("\n");
    gets(s);
    printf("\n");
    printf("Enter second string");
    printf("\n");
    gets(g);
    printf("\n");
    int l,f,i;
    l=strlen(s);
    f=strlen(g);
    for(i=0;i<l;i++)//Saving one's value in temporary array.
    {
       temp[i]=s[i];
    }
     for(i=0;i<f;i++)
    {
       s[i]=g[i];
    }
    s[f]='\0';
     for(i=0;i<l;i++)
    {
       g[i]=temp[i];  //Swapping the values here.
    }
    g[l]='\0';
    printf("After swapping");
    printf("\n");
    puts(s);
    printf("\n");
    puts(g);
return 0;
}
