#include<stdio.h>
int main(){
    int i,j,a[14],m,k,p,r,temp,t,x;
    printf("Below Program reverses an array");
    printf("\n");
    printf("Enter the length of  array");
    printf("\n");
    scanf("%d",&m);
    printf("Enter the elements of the array");
    printf("\n");
    for(i=0;i<m;i++){
       scanf("%d",&a[i]);
    }
    k=m%2;
    x=(m/2)-1;
  printf("\n");
    if(k=0)
    {

       for(r=0;r<=x;r++){
           temp=a[r];
           a[r]=a[m-1-r];
           a[m-1-r]=temp;

       }
       }

    else
    {
       for(j=0;j<=((m-1)/2 - (1));j++){
          temp=a[j];
          a[j]=a[m-1-j];
          a[m-1-j]=temp;
       }

     t=a[x];
           a[x]=a[m-1-x];
           a[m-1-x]=t;
           printf("Th reverse order is :");
           printf("\n");
                       for(p=0;p<m;p++){

      printf("%d",a[p]);

       }

return 0;
}
}

