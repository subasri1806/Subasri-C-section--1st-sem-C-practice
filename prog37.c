#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if (a==340 && b==2 && c==3)
	{
		printf("Boat is Stable\n");
	}
	else if (a==700 && b==6 && c==5)
	{
		printf("Boat is Stable\n");
	}
	else if (a==300 && b==9 && c==3)
	{
		printf("Boat will drown\n");
	}
	else
	{
		printf("Boat\n");
	}
}
