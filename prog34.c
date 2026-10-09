#include <stdio.h>
int main()
{
	int age;
	scanf("%d", &age);
	if (age>=18)
	{
		if (age>=60 && age<=100)
		{
			printf("Ground floor");
		}
		else
		{
			printf("First floor");
		}
	}
	else
	{
		printf("Go watch chutti tv");
	}
}
