#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the range of an array: ");
	scanf("%d",&n);
	int arr[n],temp,j,k=0,i;
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			for(j=n-1;j>i;j--)
			{
				if(arr[j]<0)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					k++;
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}