#include <stdio.h>
int main(){
	FILE*fp;
	fp = fopen("data3.txt", "w");
	if (fp==NULL){
		printf("FILE CANNOT BE OPENED");
		return 1;
	}
	fputs("Welcome to C Programming", fp);
	fclose(fp);
	printf("Character written successfully");
	return 0;
}
