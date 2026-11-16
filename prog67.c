#include <stdio.h>
int sqr(int a){
	printf("SQR: %d", a*a);
}

int main()
{
	int a;
	scanf("%d", &a);
	sqr(a);
	return 0;
}
