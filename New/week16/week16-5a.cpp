#include <stdio.h>
int main()
{
	int a, ans=0;
	scanf("%d",&a);
	if(a<0)a=-a;
	while(a>0)
	{
		ans=a%10;
		a=a/10;
	}
	printf("%d\n",ans);
}
