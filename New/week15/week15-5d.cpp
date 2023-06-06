#include <stdio.h>
int main()
{
	int a[100], n, min, max;
	scanf("%d",&n);
	max=n;
	min=n;
	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)break;
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	printf("[%d,%d]",min, max);
}
