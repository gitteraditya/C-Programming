#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=9;i++){
        //inside curly brace loop//
        for(j=1;j<=9;j++)
        {
            //*put i=4 because the condition changes at i=4 *//
            if(i>=1 && i<6)
            {
                 if (j>=7-i && j<=3+i)
                  printf(" ");


            else
                  printf("*");
            }
            else

                    if(j>=i-3 && j<=13-i)
                       printf(" ");
                    else
                       printf("*");

    }printf("\n");
    }
return 0;
}
