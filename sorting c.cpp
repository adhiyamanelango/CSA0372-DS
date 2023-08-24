#include<stdio.h>
int main()
{
	int a[100],i,j,n;
	printf("enter num of elements");
	scanf("%d",&n);
	printf("\nenter  elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("\n sorted array");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		return 0;
}
