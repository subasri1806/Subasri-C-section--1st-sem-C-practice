#include <stdio.h>
int main(){
	FILE*fp;
	char ch;
	int count = 0;
	fp = fopen("data.txt", "r");
	while((ch = fgetc(fp)) != EOF){
		count++;
	}
	printf("Number of characters: %d", count);
	fclose(fp);
	return 0;
	}
