#include <stdio.h>
int main()
{
	char emp_name[10];
	int emp_id;
	char designation[15];
	scanf("%s\n", emp_name);
	printf("emp_name=%s",emp_name);
	scanf("%d\n", &emp_id);
	printf("emp_id:");
	scanf("%s\n", designation);
	printf("designation=%s", designation);
	return 0;
}
	
