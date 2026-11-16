#include <stdio.h>
int main(){
	FILE*fp;
	fp = fopen("data.txt", "w");
	if (fp==NULL){
		printf("FILE CANNOT BE OPENED");
		return 1;
	}
	fprintf(fp, "Hello World");
	fclose(fp);
	printf("Data written successfully\n");
	return 0;
}

