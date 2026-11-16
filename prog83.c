#include <stdio.h>
int main()
{
	int n, first, last, middle,result;
	scanf("%d", &n);
	first = n/1000;
	last = n%10;
	middle = (n/10) % 100;
	result = last * 1000 + middle * 10 + first;
	printf("%d", result);
	return 0;
}
