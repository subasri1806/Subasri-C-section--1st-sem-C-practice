#include <stdio.h>
int equal(int x, int y)
{
	if(x==y)
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	equal(a,b);
	return 0;
} 
 
