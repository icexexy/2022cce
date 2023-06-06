#include <stdio.h>
int main()
{
	int x1, y1, x2, y2, a, b;
	scanf("%d%d%d%d",&x1, &y1, &x2, &y2);
	a=x1-x2;
	if(a<0)a=-a;
	b=y1-y2;
	if(b<0)b=-b;
	printf("%d",a*b);
}
