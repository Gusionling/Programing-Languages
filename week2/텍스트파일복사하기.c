#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp1;
	FILE* fp2;
	char file1[100];
	char file2[100];
	int c;

	printf("원본 파일 이름: ");
	scanf("%s", &file1);
	printf("복사 파일 이름: ");
	scanf("%s", &file2);

	//선언은 줄이는 연습을 하자 
	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "w");

	if (fp1 == NULL) { //((fp1 = fopen(file1,"r")) ==NULL)로 하면 간단하게 줄일 수 있다. 
		fprintf(stderr, "파일을 열수 없습니다.");
		exit(1);
	}

	if (fp2 == NULL) {
		fprintf(stderr, "파일을 열수 없습니다.");
		exit(1);
	}

	while ((c = fgetc(fp1)) != EOF) {
		fputc(c, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}