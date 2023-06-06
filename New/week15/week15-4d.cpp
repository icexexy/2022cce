#include <stdio.h>
int main()
{
	int n, m, ans;
	scanf("%d%d",&n,&m);
	ans=n/m;
	if(n%m>=1)
	ans++;
	printf("%d",ans);
}
