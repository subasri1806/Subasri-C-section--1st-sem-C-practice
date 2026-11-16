#include <stdio.h>
int withdraw(int bal, int amt){
	printf("Enter the amount to withdraw: ");
	scanf("%d", &amt);
	bal = bal-amt;
	return bal;
}

int main()
{
	int a,b;
	scanf("%d", &a);
	b = withdraw(a,b);
	printf("Balance: %d\n", b);
	return b;
}

	




