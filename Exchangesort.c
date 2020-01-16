//Exchange Sort Using Functions

#include<stdio.h>
int exchange(int a[10],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(a[i]<a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n element after sorting is :\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}	
	printf("\n");	
	return 0;
}
void main()
{
	int key,a[10],size;
	printf("\n Enter the size:");
	scanf("%d",&size);
	printf("Enter the array elements:");
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	exchange(a,size);
}

