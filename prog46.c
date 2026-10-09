#include <stdio.h>
int main()
{
	int mark;
	scanf("%d", &mark);
	if (mark>=90 && mark <=100)
		printf("Garde A");
	else if (mark<90 && mark>=70)
		printf("Grade B");
	else if (mark<70 && mark>=50)
		printf("Grade C");
	else if (mark<50 && mark>=0)
		printf("Grade D");
	else
		printf("Not possible");
	return 0;
}
