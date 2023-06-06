#include <stdio.h>
int main()
{
	int i, n,a[5],max, min;
	scanf("%d",&n);
	min=n;
	max=n;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max-min);
}
