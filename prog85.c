#include <stdio.h>
int main()
{
	int arr2[2][3] = {100, 200, 300, 400, 500, 600};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
}
