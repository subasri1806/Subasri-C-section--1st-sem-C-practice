#include <stdio.h>
int main()
{	
	int row, col;
	printf("Enter Row & Column: \n");
	scanf("%d %d", &row, &col);
	int arr[row][col];
	printf("Enter %d elements: \n", row*col);
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d", &arr[i][j]);		
		}
	}
	printf("The matrix is: \n"); 
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");		
	}
}
