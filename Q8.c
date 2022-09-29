//Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
#include<limits.h>
int main()
{
  int a[10],sum=0,min1,min2;
  printf("\n Enter the 10 Number\n");
  min1=min2=INT_MAX;
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]<min1)
    {
        min2=min1;
        min1=a[0];
    }
     else if (a[i] <min2 && a[i] != min1)
     {
             min2 = a[i];
     }

}
  printf("Smallest number from Enter number is = %d\n",min1);
  printf("Second Smallest number from Enter number is =%d\n",min2);



}
