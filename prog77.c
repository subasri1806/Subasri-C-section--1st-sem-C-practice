#include <stdio.h>
int main()
{
	 int n;
	 printf("Enter size: ");
	 scanf("%d", &n);
	 int sum=0;
	 int arr[n];
	 for(int i=0; i<n; i++){
	 	printf("Enter the Elements: ");
	 	scanf("%d", &arr[i]);
	 }for(int i=0; i<n; i++){
	 	sum+=arr[i];
	 }
	printf("sum: %d", sum);
	
}
	 	
	 
