#include<stdio.h>
int main()
{
	int a[] = {5,4,3,2,1};
	int temp,i,j;
	
	
	for(j = 1; j<=5; j++)
	{
		for(i = 0; i<5; i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		
	}
	for(i = 0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
