#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int st[MAX],top=-1;
void push(int val);
int pop();
int main()
{
   int val,array[10],i,n,k,r;
   printf("Enter a number");
   printf("\n");
   scanf("%d",&n);
   printf("\n");
   //Pushing Elements
   for (i=0;i<=n-1;i++)
   {
       scanf("%d",&array[i]);
   }
   for(i=0;i<n;i++)
   {
       push(array[i]);
   }
   //Reverse Algorithm
    for(i=0;i<n;i++)
    {
        r = pop();
        array[i]=r;
    }

   //Reverse order
   printf("The reverse order of the array is");
   printf("\n");
   for(i=0;i<n;i++)
   {
       printf("%d",array[i]);
       printf("\n");
   }
return 0;
}
void push(int val)
{
top++;
st[top]=val;
}
int pop()
{
    int p;
p=st[top];
top--;
return p;
}
