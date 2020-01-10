#include<stdio.h>

int linearsearch (int array[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
		if (array[i] == key)
		return i;
		return -1;
}

int main()
{
	int array[100],n,key,ele,i;
	printf("enter the array size \n");
	scanf("%d",&n);
	
	printf("enter array elements : \n");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	printf("enter the key element \n");
	scanf("%d",&key);
	
	ele=linearsearch (array,key,n);
	if(ele == -1)
	{
		printf("element not found ");	
	}
	else
	{
		
		printf("element found at location %d",ele+1);
	}
}
