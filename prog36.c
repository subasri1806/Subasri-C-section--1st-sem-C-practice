#include <stdio.h>
int main()
{
	int a=4;
	switch(a) 
	{
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		case 'a':
			printf("3\n");
			break;
		case 4:
			printf("4\n");
			break;
		default:
			printf("Not 1234");
	}
}
