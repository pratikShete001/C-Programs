#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX];
	int index, number,size = 0,i;
	
	printf("How much element you want to insert: ");
	scanf("%d",&size);
	
	printf("Enter elements of Array: ");
	for(i =0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array before insertion: \n");
	for(i =0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nEnter element of insert: ");
	scanf("%d",&number);
	printf("\nWhich index you want to insert element: ");
	scanf("%d",&index);
	
		for(i = size-1; i>= index; i--)
		{
			a[i+1] = a[i];
		}
		size++;
		a[index] = number;
	
	
	printf("\nArray after insertion element %d is \n",number);
	for(i =0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	
}
