#include<stdio.h>
#define MAX 10
int main()
{
	int index,size = 5,i;
	int a[MAX]  = {10,20,30,40,50};
	printf("Array before deletion: \n");
	for(i =0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	printf("Enter index of element:\n ");
	scanf("%d",&index);
	
	for(i= index; i <= size-1; i++)
		{
			a[i] = a[i+1];
		}
	size--;
	
	printf("Array after deletion: \n");
	for(i =0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
	
