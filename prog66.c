#include <stdio.h>
int cube(int a){
	printf("CUBE: %d", a*a*a);
}

int main()
{
	int a;
	scanf("%d", &a);
	cube(a);
	return 0;
}
