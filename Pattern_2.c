#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=21;i++){
          if(i<=10)
          {
            k=i-1;
          }
          else if(i>=12 && i<=21)
          {
              k=21-i;

          }
          else
          {
              k=0;
          }
       for(j=1;j<=21;j++){

            if(i<=11)
            {
                  if(j>=12-i && j<=10+i){
                        if(k<10)
                        {
                          printf("%d",k);
                        }
                        else if(k>=10)
                        {
                            printf("%d",k%10);
                        }

                    j<11?k++:k--;
                  }



                  else
                    printf(" ");
            }
            else
            {
                 if(j>=i-10 && j<=32-i){
                        if(k<10)
                        {
                          printf("%d",k);
                        }
                        else if(k>=10)
                        {
                            printf("%d",k%10);
                        }

                    j<11?k++:k--;
                 }



                  else
                    printf(" ");

            }


       }
       printf("\n");


    }
return 0;
}
