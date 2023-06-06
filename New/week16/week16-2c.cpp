#include <stdio.h>
int main()
{
	int a, sum=0;
	while(scanf("%d",&a)!=EOF)
	{
		printf("Enter an integer ( 999 to end ): \n");
		sum+=a;
	}
	printf("The total is: %d",sum-999);
}
