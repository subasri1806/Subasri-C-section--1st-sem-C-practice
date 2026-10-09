#include <stdio.h>
int main()
{
	int percent;
	scanf("%d", &percent);
	if (percent<=100 && percent>80)
		printf("Garde A");
	else if (percent<=80 && percent>70)
		printf("Grade B");
	else if (percent<=70 && percent>=50)
		printf("Grade C");
	else
		printf("Grade D");
	return 0;
}
