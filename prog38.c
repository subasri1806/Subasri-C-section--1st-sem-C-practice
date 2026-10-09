#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if (a>((b*75)+(c*50)))
	{
		printf("Boat is Stable\n");
	}
	else
	{
		printf("Boat will drown\n");
	}
}

//interview question1
