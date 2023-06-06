#include <stdio.h>
int main()
{
	int n, a[100], b[100], ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		ans=a[i]+b[i];
		printf("%d ",ans);
	}
}
