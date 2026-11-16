#include <stdio.h>
int main()
{
	int arr4[2][3] = {
		{111},
		{112}
	};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ", arr4[i][j]);
		}
		printf("\n");
	}
}
