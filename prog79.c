#include <stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int smallest = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] < smallest){
			smallest = arr[i];
		}
	}
	printf("The smallest number is: %d\n", smallest);
	return 0;
}
		
