#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100], lena, lenb;
	scanf("%s%s",&a,&b);
	lena=strlen(a);
	lenb=strlen(b);
	if(lena>lenb)printf("1");
	else if(lena<lenb)printf("-1");
	else printf("%d",strcmp(a,b));
}
