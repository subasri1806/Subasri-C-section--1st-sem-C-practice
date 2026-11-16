#include <stdio.h>
int add(int x, int y)
{
	printf("ADD: %d", x+y);
}


int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	add(a,b);				//call
	return 0;
}
