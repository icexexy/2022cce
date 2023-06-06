#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d",&n);
	for(int i=1;i<=4;i++)
	{
		ans=n%10;
		n=n/10;
	}
	printf("%d",ans);
}
