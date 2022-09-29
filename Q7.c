//Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
  int a[10],sum=0,max1,max2;
  printf("\n Enter the 10 Number\n");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(a[0]<a[i])
    {
     a[0]=a[i];
     max2=max1;
     max1=a[0];
    }
    if(max1<a[i]&& a[1]>max2)
    {
    a[1]=a[i];
    max2=a[1];
    }
}
  printf("Greatest number from Enter number is = %d\n",max1);
  printf("Second Greatest number from Enter number is =%d\n",max2);
}
