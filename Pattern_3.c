#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
            k=1;

       for(j=1;j<=9;j++){

            if(j<=i+i-1){

                    if(j%2!=0)
                    {
                         printf("%d",k);
                         k++;
                    }
                    else
                    {
                        printf(" ");
                    }


            }

            else
                printf(" ");
       }
       printf("\n");


    }
return 0;
}
