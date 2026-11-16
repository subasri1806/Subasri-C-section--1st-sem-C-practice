#include <stdio.h>
int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d", &n);
	int found=0;
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter the Elements: ");
		scanf("%d", &arr[i]);
	}
	int key;
	printf("Enter key: ");
	scanf("%d", &key);
	for(int i=0; i<n; i++){
		if(arr[i] == key){
			found = 1;
			printf("Element found index: %d\n",i);
			break;	
	}if (found=0){
		printf("Element not found");
	}
	}
}
