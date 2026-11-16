#include <stdio.h>
int main(){
	FILE*fp;
	char name[10];
	fp = fopen("data.txt", "a");
	fprintf(fp, "\nWelcome to C Programming");
	fclose(fp);
	printf("Texr appended successfully");
	return 0;
}
while((ch = fgetc(fp)) != EOF)
