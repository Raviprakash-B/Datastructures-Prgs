/*Bubble sort*/
#include<stdio.h>

int main()
{
	int array[100],i,j,n,temp;
	
	printf("enter numbers :");
	scanf("%d",&n);
	
	printf("enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	/*Logic for Bubble sort*/
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;

		    }
	    }
    }
printf("Sorted elements are : \n");
      for(i=0;i<n;i++)
      printf(" %d",array[i]);

}

