//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
  int a[10],b[10],tmp;
  printf("\n Enter the 10 Number\n");
   for(int i=0;i<10;i++)
    {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
  for(int i=0;i<10;i++)
  {
    for(int j=i+1;j<10;j++)
    {
    if(a[j]<a[i])
    {
     tmp=a[i];
     a[i]=a[j];
     a[j]=tmp;
    }
    }
    }
     for(int i=0;i<10;i++)
    {
	    printf(" \n  %d",a[i]);

	    }
	    printf("\n");


}
