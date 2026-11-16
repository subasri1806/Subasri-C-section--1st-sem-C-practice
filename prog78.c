#include <stdio.h>
int main()
{
	 int n;
	 printf("Enter size: ");
	 scanf("%d", &n);
	 int tot=0;
	 float avg=0;
	 int arr[n];
	 for(int i=0; i<n; i++){
	 	printf("Enter the Elements: ");
	 	scanf("%d", &arr[i]);
	 }for(int i=0; i<n; i++){
	 	tot+=arr[i];
	 	avg=tot/n;
	 }
	printf("Avg: %.2f", avg);
	
}
	 	
	 
