#include <stdio.h>
int main()
{
	int x,y,n;
	scanf("%d %d %d", &x, &y,&n);
	switch(n)
	{
		case 1:
			printf("Addition=%d\n", x+y);
			break;
		case 2:
			printf("Subraction=%d\n", x-y);
			break;
		case 3:
			printf("Multiplication=%d\n", x*y);
			break;
		case 4:
			printf("Division=%d\n", x/y);
			break;
		case 5:
			printf("Modulus=%d\n", x%y);
			break;
		default:
			printf("Invalid\n");
	}
		return 0;
}
