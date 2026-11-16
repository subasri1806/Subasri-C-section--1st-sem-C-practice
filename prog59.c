#include <stdio.h>
int sub(int x, int y)
{
	printf("SUB: %d", x-y);
}


int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	sub(a,b);				//call
	return 0;
}
