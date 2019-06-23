#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=6;i++){
            k=0;
       for(j=1;j<=6;j++){
             j%2!=0?k++:k--;
            if(j<=i)
                printf("%d",k);

            else
                printf(" ");
       }
       printf("\n");


    }
return 0;
}
