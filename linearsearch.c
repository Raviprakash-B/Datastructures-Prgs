#include<stdio.h>
int main()
{
	int array[100],search,i,n;
	printf("enter the elements in array \n");
	scanf("%d",&n);
	
	printf("enter %d numbers \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	printf("enter a number to search \n");
	scanf("%d",&search);
	
	for(i=0;i<n;i++)
	{
		if(array[i]==search) /*if required element is found*/
		{
			printf("%d is present at location %d. \n",search,i+1);
			break;
		}
	}
	if(i==n)
	printf("%d isn't present in the array \n",search);
	
	return 0;
}

