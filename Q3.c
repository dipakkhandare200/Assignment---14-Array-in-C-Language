//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers,
// which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
  int   a[10],sumeven=0,sumodd=0,n=10;
  printf("\n Enter the %d Number\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
    sumeven=sumeven+a[i];
    }
    else
    {
    sumodd=sumodd+a[i];
    }
  }
  printf("sum of Enter Even number is %d \n",sumeven);
  printf("sum of Enter Odd number is %d \n",sumodd);
}

