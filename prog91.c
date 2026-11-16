#include <stdio.h>
int main(){
	FILE*fp;
	fp = fopen("Student.txt", "w");
	if (fp==NULL){
		printf("FILE CANNOT BE OPENED");
		return 1;
	}
	fprintf(fp,"Name: Subasri\n");
	fprintf(fp,"Age: 17");
		fclose(fp);
		printf("Data written Successfully\n");
		return 0;
}
