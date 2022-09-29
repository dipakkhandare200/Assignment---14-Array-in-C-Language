//9. Write a program in C to read n number of values in an array and display it in reverse  order. Take array values from the user.
#include<stdio.h>
int main()
{
  int a[100],n,i;
  printf("How many number you want to stored in array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("no.%d=",i);
      scanf("%d",&a[i]);
  }
  printf("You Enter number are follows\n");
  for(i=0;i<n;i++)
  {
      printf("%5d ",a[i]);
  }
  printf("\n You Enter number are in Reverse order\n");
  for(i=n-1;i>=0;i--)
  {
      printf("%5d",a[i]);
  }
  printf("\n");
}
