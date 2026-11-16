#include <stdio.h>
int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d", &n);
	int even = 0;
	int odd = 0;
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter the Elements: ");
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++){
		if (arr[i] % 2 == 0){
			even+=1;
		}else{
			odd+=1;			
	}
	}
	printf("Even number: %d\n", even);
	printf("Odd number: %d\n", odd);
}
	
		
