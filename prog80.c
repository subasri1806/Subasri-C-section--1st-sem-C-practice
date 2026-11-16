#include <stdio.h>
int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int greatest = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] > greatest){
			greatest = arr[i];
		}
	}
	printf("The greatest number is: %d\n", greatest);
	return 0;
}
