//10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
  int b[100],a[100],n,i;
  printf("How many number you want to stored in array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("no.%d=",i);
      scanf("%d",&a[i]);
      b[i]=a[i];
  }
  printf("You Enter number in 1st Array \n");
  for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  printf("\n You Enter number in 2nd Array \n");
  for(i=0;i<n;i++)
  {
      printf("%d ",b[i]);
  }
}
