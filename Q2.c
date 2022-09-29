//2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
  float  a[10],sum=0,n=10;
  float avg;
  printf("\n Enter the %d Number\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%f",&a[i]);
    sum=sum+a[i];
  }
  avg=sum/n;
  printf("sum of Enter number is %f",avg);

}

