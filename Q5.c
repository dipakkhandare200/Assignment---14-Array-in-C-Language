//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
{
  int a[10],sum=0;
  printf("\n Enter the 10 Number\n");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(a[0]>a[i])
    {
     a[0]=a[i];
    }

  }
  printf("Smallest number from Enter number is %d",a[0]);
}
