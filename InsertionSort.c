#include<stdio.h>
int main()
{
	int array[100],n,i,j,temp;
	
	printf("enter the number of elements: \n");
	scanf("%d",&n);
	
	printf("enter %d numbers: \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	for(i=1;i<n;i++)
	{
		temp=array[i];  //because we take i as temp value
		j=i-1;       //here we compare i-1 with i means 1st element in index ex: 5 4 10 1 6 2--->>now we compare 5 with 4 5 is i-1 and 4 is i
		while(j>=0 && array[j]>temp)   //ex: 10>1 -->10 is a[j] and temp is 1
		{
			array[j+1]=array[j]; //
			j--;
		}
		array[j+1]=temp;
		printf("Sorted elements: ");
        for(i=0;i<n;i++)
        printf(" %d",array[i]);
	}
	return 0;
}
