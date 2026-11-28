#include<stdio.h>
int main()
{   
    // WAP that will take n integer numbers into an array, and then sum up all the integers in that array
   int n,sum=0,mahi[100];
   printf("How many numbers you want to enter: ");
   scanf("%d",&n);
   printf("Enter %d numbers:",n);
   int i=1;
   while(i<=n)
   {
    scanf("%d",&mahi[i]);
    i++;
   }
   for(int i=1;i<=n;i++)
   {
     sum=sum+mahi[i];
   }
   printf("Sum is = %d",sum);
    return 0;
}
