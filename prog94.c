#include <stdio.h>
int main(){
	FILE*fp;
	fp = fopen("data1.txt", "w");
	if (fp==NULL){
		printf("FILE CANNOT BE OPENED");
		return 1;
	}
	fputc('A', fp);
	fclose(fp);
	printf("Character written successfully");
	return 0;
}
