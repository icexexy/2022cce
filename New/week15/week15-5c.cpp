#include <stdio.h>
int main()
{
	int a[100], ans=0;
	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)break;
		if(a[i]<0)a[i]=0;
		ans+=a[i];
	}
	printf("%d",ans);
}
